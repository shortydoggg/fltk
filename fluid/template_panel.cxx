//
// "$Id$"
//
// FLUID template support for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2017 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     http://www.fltk.org/COPYING.php
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

// generated by Fast Light User Interface Designer (fluid) version 1.0306

#include "template_panel.h"
#include <stdio.h>
#include <stdlib.h>
#include "../src/flstring.h"
#include <errno.h>
#include <FL/filename.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Shared_Image.H>
#include <FL/Fl_Preferences.H>
#if defined(WIN32) && !defined(__CYGWIN__)
#include <io.h>
#else
#include <unistd.h>
#endif // WIN32 && !__CYGWIN__
extern Fl_Preferences fluid_prefs;

Fl_Double_Window *template_panel=(Fl_Double_Window *)0;

static void cb_template_panel(Fl_Double_Window*, void*) {
  Fl_Shared_Image *img = (Fl_Shared_Image *)template_preview->image();
if (img) img->release();
template_preview->image(0);

template_browser->deselect();
template_name->value("");
template_instance->value("");
template_panel->hide();
}

Fl_Browser *template_browser=(Fl_Browser *)0;

static void cb_template_browser(Fl_Browser*, void*) {
  if (Fl::event_clicks()) {
  template_panel->hide();
  return;
}
Fl_Shared_Image *img = (Fl_Shared_Image *)template_preview->image();
if (img) img->release();
template_preview->image(0);
template_preview->redraw();

int item = template_browser->value();

if (item <= 1) template_instance->deactivate();
else template_instance->activate();

if (item < 1) {
  template_submit->deactivate();
  template_delete->deactivate();
  return;
}

template_submit->activate();

const char *flfile = (const char *)template_browser->data(item);
if (!flfile) {
  template_delete->deactivate();
  return;
}

template_name->value(template_browser->text(item));

template_delete->activate();

char pngfile[1024], *ext;

strlcpy(pngfile, flfile, sizeof(pngfile));
if ((ext = strrchr(pngfile, '.')) == NULL) return;
strcpy(ext, ".png");

img = Fl_Shared_Image::get(pngfile);

if (img) {
  template_preview->image(img);
  template_preview->redraw();
};
}

Fl_Box *template_preview=(Fl_Box *)0;

Fl_Input *template_name=(Fl_Input *)0;

static void cb_template_name(Fl_Input*, void*) {
  if (strlen(template_name->value())) {
  template_submit->activate();
  if (Fl::event_key() == FL_Enter) template_panel->hide();
} else template_submit->deactivate();
}

Fl_Input *template_instance=(Fl_Input *)0;

Fl_Button *template_delete=(Fl_Button *)0;

static void cb_Cancel(Fl_Button*, void*) {
  Fl_Shared_Image *img = (Fl_Shared_Image *)template_preview->image();
if (img) img->release();
template_preview->image(0);

template_browser->deselect();
template_name->value("");
template_instance->value("");
template_panel->hide();
}

Fl_Return_Button *template_submit=(Fl_Return_Button *)0;

static void cb_template_submit(Fl_Return_Button*, void*) {
  Fl_Shared_Image *img = (Fl_Shared_Image *)template_preview->image();
if (img) img->release();
template_preview->image(0);

template_panel->hide();
}

Fl_Double_Window* make_template_panel() {
  { template_panel = new Fl_Double_Window(460, 355, "New/Save Template");
    template_panel->callback((Fl_Callback*)cb_template_panel);
    { template_browser = new Fl_Browser(10, 28, 180, 250, "Available Templates:");
      template_browser->type(2);
      template_browser->labelfont(1);
      template_browser->callback((Fl_Callback*)cb_template_browser);
      template_browser->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      template_browser->when(3);
    } // Fl_Browser* template_browser
    { template_preview = new Fl_Box(200, 28, 250, 250);
      template_preview->box(FL_THIN_DOWN_BOX);
      template_preview->align(Fl_Align(69|FL_ALIGN_INSIDE));
      Fl_Group::current()->resizable(template_preview);
    } // Fl_Box* template_preview
    { template_name = new Fl_Input(198, 288, 252, 25, "Template Name:");
      template_name->labelfont(1);
      template_name->textfont(4);
      template_name->callback((Fl_Callback*)cb_template_name);
      template_name->when(3);
    } // Fl_Input* template_name
    { template_instance = new Fl_Input(198, 288, 252, 25, "Instance Name:");
      template_instance->labelfont(1);
      template_instance->textfont(4);
      template_instance->hide();
    } // Fl_Input* template_instance
    { Fl_Group* o = new Fl_Group(10, 323, 440, 25);
      { template_delete = new Fl_Button(10, 323, 143, 25, "Delete Template");
        template_delete->callback((Fl_Callback*)template_delete_cb);
      } // Fl_Button* template_delete
      { Fl_Box* o = new Fl_Box(153, 323, 126, 25);
        Fl_Group::current()->resizable(o);
      } // Fl_Box* o
      { Fl_Button* o = new Fl_Button(289, 323, 72, 25, "Cancel");
        o->callback((Fl_Callback*)cb_Cancel);
      } // Fl_Button* o
      { template_submit = new Fl_Return_Button(371, 323, 79, 25, "Save");
        template_submit->callback((Fl_Callback*)cb_template_submit);
      } // Fl_Return_Button* template_submit
      o->end();
    } // Fl_Group* o
    template_panel->set_modal();
    template_panel->end();
  } // Fl_Double_Window* template_panel
  return template_panel;
}

void template_clear() {
  int i;
  void *filename;
  
  for (i = 1; i <= template_browser->size(); i ++) {
    if ((filename = template_browser->data(i)) != NULL) free(filename);
  }
  
  template_browser->deselect();
  template_browser->clear();
}

void template_delete_cb(Fl_Button *, void *) {
  int item = template_browser->value();
  if (item < 1) return;
  
  const char *name = template_browser->text(item);
  const char *flfile = (const char *)template_browser->data(item);
  if (!flfile) return;
  
  if (!fl_choice("Are you sure you want to delete the template \"%s\"?",
                 "Cancel", "Delete", 0, name)) return;
  
  if (unlink(flfile)) {
    fl_alert("Unable to delete template \"%s\":\n%s", name, strerror(errno));
    return;
  }
  
  template_browser->remove(item);
  template_browser->do_callback();
}

void template_load() {
  int i;
  char name[1024], filename[1024], path[1024], *ptr;
  struct dirent **files;
  int num_files;
  
  fluid_prefs.getUserdataPath(path, sizeof(path));
  strlcat(path, "templates", sizeof(path));
  
  num_files = fl_filename_list(path, &files);
  
  for (i = 0; i < num_files; i ++) {
    if (fl_filename_match(files[i]->d_name, "*.fl")) {
      // Format the name as the filename with "_" replaced with " "
      // and without the trailing ".fl"...
      strlcpy(name, files[i]->d_name, sizeof(name));
      *strstr(name, ".fl") = '\0';
  
      for (ptr = name; *ptr; ptr ++) {
        if (*ptr == '_') *ptr = ' ';
      }
  
      // Add the template to the browser...
      snprintf(filename, sizeof(filename), "%s/%s", path, files[i]->d_name);
      template_browser->add(name, strdup(filename));
    }
  
    free(files[i]);
  }
  
  if (num_files > 0) free(files);
}

//
// End of "$Id$".
//
