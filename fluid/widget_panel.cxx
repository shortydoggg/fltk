//
// "$Id$"
//
// Widget panel for the Fast Light Tool Kit (FLTK).
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

#include "widget_panel.h"
extern void comment_cb(Fl_Text_Editor*, void*);

static void cb_(Fl_Tabs* o, void* v) {
  propagate_load((Fl_Group *)o,v);
}

Fl_Menu_Item menu_[] = {
 {"   Image Alignment   ", 0,  0, (void*)(0xFFFFFFFF), 1, (uchar)FL_NORMAL_LABEL, 2, 11, 0},
 {"image over text", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_IMAGE_OVER_TEXT), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"text over image", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_TEXT_OVER_IMAGE), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"text next to image", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_TEXT_NEXT_TO_IMAGE), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"image next to text", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_IMAGE_NEXT_TO_TEXT), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"image is backdrop", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_IMAGE_BACKDROP), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Menu_Item menu_1[] = {
 {"   Inside && Outside   ", 0,  0, (void*)(0xFFFFFFFF), 1, (uchar)FL_NORMAL_LABEL, 2, 11, 0},
 {"top left", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_TOP_LEFT), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"top", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_TOP), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"top right", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_TOP_RIGHT), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"left", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_LEFT), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"center", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_CENTER), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"right", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_RIGHT), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"bottom left", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_BOTTOM_LEFT), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"bottom", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_BOTTOM), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"bottom right", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_BOTTOM_RIGHT), 128, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"   Outside Alignment   ", 0,  0, (void*)(0xFFFFFFFF), 1, (uchar)FL_NORMAL_LABEL, 2, 11, 0},
 {"left top", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_LEFT_TOP), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"right top", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_RIGHT_TOP), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"left bottom", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_LEFT_BOTTOM), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"right bottom", 0,  0, (void*)((fl_intptr_t)FL_ALIGN_RIGHT_BOTTOM), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Value_Input *widget_x_input=(Fl_Value_Input *)0;

Fl_Value_Input *widget_y_input=(Fl_Value_Input *)0;

Fl_Value_Input *widget_w_input=(Fl_Value_Input *)0;

Fl_Value_Input *widget_h_input=(Fl_Value_Input *)0;

Fl_Menu_Item menu_2[] = {
 {"private", 0,  0, (void*)(0), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"public", 0,  0, (void*)(1), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"protected", 0,  0, (void*)(2), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Menu_Item menu_3[] = {
 {"local", 0,  0, (void*)(0), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {"global", 0,  0, (void*)(1), 0, (uchar)FL_NORMAL_LABEL, 0, 11, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Input *v_input[4]={(Fl_Input *)0};

static void cb_1(Fl_Tile*, void* v) {
  wComment->do_callback(wComment, v);
wCallback->do_callback(wCallback, v);
}

Fl_Text_Editor *wComment=(Fl_Text_Editor *)0;

CodeEditor *wCallback=(CodeEditor *)0;

Fl_Button *wLiveMode=(Fl_Button *)0;

/**
 Create a panel that can be used with all known widgets
*/
Fl_Double_Window* make_widget_panel() {
  Fl_Double_Window* w;
  { // Use a Double Window to avoid flickering.
    Fl_Double_Window* o = new Fl_Double_Window(420, 400);
    w = o; if (w) {/* empty */}
    o->labelsize(11);
    o->align(Fl_Align(FL_ALIGN_CLIP|FL_ALIGN_INSIDE));
    o->hotspot(o);
    { Fl_Tabs* o = new Fl_Tabs(10, 10, 400, 350);
      o->selection_color((Fl_Color)12);
      o->labelsize(11);
      o->labelcolor(FL_BACKGROUND2_COLOR);
      o->callback((Fl_Callback*)cb_);
      o->when(FL_WHEN_NEVER);
      { Fl_Group* o = new Fl_Group(10, 30, 400, 330, "GUI");
        o->labelsize(11);
        o->callback((Fl_Callback*)propagate_load);
        o->when(FL_WHEN_NEVER);
        { Fl_Group* o = new Fl_Group(95, 40, 309, 20, "Label:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Input* o = new Fl_Input(95, 40, 190, 20);
            o->tooltip("The label text for the widget.\nUse Ctrl-J for newlines.");
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)label_cb);
            o->when(FL_WHEN_CHANGED);
            Fl_Group::current()->resizable(o);
          } // Fl_Input* o
          { Fl_Choice* o = new Fl_Choice(284, 40, 120, 20);
            o->tooltip("The label style for the widget.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)labeltype_cb);
            o->menu(labeltypemenu);
          } // Fl_Choice* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 65, 309, 20, "Image:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Input* o = new Fl_Input(95, 65, 240, 20);
            o->tooltip("The active image for the widget.");
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)image_cb);
            Fl_Group::current()->resizable(o);
          } // Fl_Input* o
          { Fl_Button* o = new Fl_Button(334, 65, 70, 20, "Browse...");
            o->tooltip("Click to choose the active image.");
            o->labelsize(11);
            o->callback((Fl_Callback*)image_browse_cb);
          } // Fl_Button* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 90, 309, 20, "Inactive:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Input* o = new Fl_Input(95, 90, 240, 20);
            o->tooltip("The inactive image for the widget.");
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)inactive_cb);
            Fl_Group::current()->resizable(o);
          } // Fl_Input* o
          { Fl_Button* o = new Fl_Button(334, 90, 70, 20, "Browse...");
            o->tooltip("Click to choose the inactive image.");
            o->labelsize(11);
            o->callback((Fl_Callback*)inactive_browse_cb);
          } // Fl_Button* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 115, 310, 20, "Alignment:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Button* o = new Fl_Button(95, 115, 30, 20, "Clip");
            o->tooltip("Clip the label to the inside of the widget.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->callback((Fl_Callback*)align_cb, (void*)((fl_intptr_t)FL_ALIGN_CLIP));
            o->align(Fl_Align(FL_ALIGN_CENTER|FL_ALIGN_INSIDE));
          } // Fl_Button* o
          { Fl_Button* o = new Fl_Button(130, 115, 38, 20, "Wrap");
            o->tooltip("Wrap the label text.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->callback((Fl_Callback*)align_cb, (void*)((fl_intptr_t)FL_ALIGN_WRAP));
          } // Fl_Button* o
          { Fl_Button* o = new Fl_Button(278, 115, 20, 20, "@-1<-");
            o->tooltip("Left-align the label.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->labelcolor(FL_INACTIVE_COLOR);
            o->callback((Fl_Callback*)align_cb, (void*)((fl_intptr_t)FL_ALIGN_LEFT));
            o->hide();
          } // Fl_Button* o
          { Fl_Button* o = new Fl_Button(303, 115, 20, 20, "@-1->");
            o->tooltip("Right-align the label.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->labelcolor(FL_INACTIVE_COLOR);
            o->callback((Fl_Callback*)align_cb, (void*)((fl_intptr_t)FL_ALIGN_RIGHT));
            o->hide();
          } // Fl_Button* o
          { Fl_Button* o = new Fl_Button(328, 115, 20, 20, "@-18");
            o->tooltip("Top-align the label.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->labelcolor(FL_INACTIVE_COLOR);
            o->callback((Fl_Callback*)align_cb, (void*)((fl_intptr_t)FL_ALIGN_TOP));
            o->hide();
          } // Fl_Button* o
          { Fl_Button* o = new Fl_Button(353, 115, 20, 20, "@-12");
            o->tooltip("Bottom-align the label.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->labelcolor(FL_INACTIVE_COLOR);
            o->callback((Fl_Callback*)align_cb, (void*)((fl_intptr_t)FL_ALIGN_BOTTOM));
            o->hide();
          } // Fl_Button* o
          { Fl_Choice* o = new Fl_Choice(172, 115, 110, 20);
            o->down_box(FL_BORDER_BOX);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)align_text_image_cb);
            o->menu(menu_);
          } // Fl_Choice* o
          { Fl_Choice* o = new Fl_Choice(288, 115, 85, 20);
            o->down_box(FL_BORDER_BOX);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)align_position_cb);
            o->menu(menu_1);
          } // Fl_Choice* o
          { Fl_Button* o = new Fl_Button(378, 115, 20, 20, "@-3square");
            o->tooltip("Show the label inside the widget.");
            o->type(1);
            o->selection_color(FL_INACTIVE_COLOR);
            o->labelsize(11);
            o->labelcolor(FL_INACTIVE_COLOR);
            o->callback((Fl_Callback*)align_cb, (void*)((fl_intptr_t)FL_ALIGN_INSIDE));
          } // Fl_Button* o
          { Fl_Box* o = new Fl_Box(404, 115, 0, 20);
            o->labelsize(11);
            Fl_Group::current()->resizable(o);
          } // Fl_Box* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 150, 314, 20, "Position:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { widget_x_input = new Fl_Value_Input(95, 150, 55, 20, "X:");
            widget_x_input->tooltip("The X position of the widget.");
            widget_x_input->labelsize(11);
            widget_x_input->maximum(2048);
            widget_x_input->step(1);
            widget_x_input->textsize(11);
            widget_x_input->callback((Fl_Callback*)x_cb);
            widget_x_input->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* widget_x_input
          { widget_y_input = new Fl_Value_Input(155, 150, 55, 20, "Y:");
            widget_y_input->tooltip("The Y position of the widget.");
            widget_y_input->labelsize(11);
            widget_y_input->maximum(2048);
            widget_y_input->step(1);
            widget_y_input->textsize(11);
            widget_y_input->callback((Fl_Callback*)y_cb);
            widget_y_input->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* widget_y_input
          { widget_w_input = new Fl_Value_Input(215, 150, 55, 20, "Width:");
            widget_w_input->tooltip("The width of the widget.");
            widget_w_input->labelsize(11);
            widget_w_input->maximum(2048);
            widget_w_input->step(1);
            widget_w_input->textsize(11);
            widget_w_input->callback((Fl_Callback*)w_cb);
            widget_w_input->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* widget_w_input
          { widget_h_input = new Fl_Value_Input(275, 150, 55, 20, "Height:");
            widget_h_input->tooltip("The height of the widget.");
            widget_h_input->labelsize(11);
            widget_h_input->maximum(2048);
            widget_h_input->step(1);
            widget_h_input->textsize(11);
            widget_h_input->callback((Fl_Callback*)h_cb);
            widget_h_input->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* widget_h_input
          { Fl_Light_Button* o = new Fl_Light_Button(335, 150, 65, 20, "Relative");
            o->tooltip("If set, widgets inside a widget class of type Fl_Group are repositioned relat\
ive to the origin at construction time");
            o->labelsize(11);
            o->callback((Fl_Callback*)wc_relative_cb);
          } // Fl_Light_Button* o
          { Fl_Box* o = new Fl_Box(398, 150, 1, 20);
            Fl_Group::current()->resizable(o);
          } // Fl_Box* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 185, 300, 20, "Values:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Value_Input* o = new Fl_Value_Input(95, 185, 55, 20, "Size:");
            o->tooltip("The size of the slider.");
            o->labelsize(11);
            o->step(0.010101);
            o->textsize(11);
            o->callback((Fl_Callback*)slider_size_cb);
            o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* o
          { Fl_Value_Input* o = new Fl_Value_Input(155, 185, 55, 20, "Minimum:");
            o->tooltip("The minimum value of the widget.");
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)min_cb);
            o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* o
          { Fl_Value_Input* o = new Fl_Value_Input(215, 185, 55, 20, "Maximum:");
            o->tooltip("The maximum value of the widget.");
            o->labelsize(11);
            o->value(1);
            o->textsize(11);
            o->callback((Fl_Callback*)max_cb);
            o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* o
          { Fl_Value_Input* o = new Fl_Value_Input(275, 185, 55, 20, "Step:");
            o->tooltip("The resolution of the widget value.");
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)step_cb);
            o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* o
          { Fl_Value_Input* o = new Fl_Value_Input(335, 185, 55, 20, "Value:");
            o->tooltip("The current widget value.");
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)value_cb);
            o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* o
          { Fl_Box* o = new Fl_Box(395, 185, 0, 20);
            Fl_Group::current()->resizable(o);
          } // Fl_Box* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 185, 300, 20, "Size Range:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          o->hide();
          { Fl_Value_Input* o = new Fl_Value_Input(95, 185, 55, 20, "Minimum Size:");
            o->tooltip("The size of the slider.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)min_w_cb);
            o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* o
          { Fl_Value_Input* o = new Fl_Value_Input(155, 185, 55, 20);
            o->tooltip("The minimum value of the widget.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)min_h_cb);
            o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* o
          { Fl_Button* o = new Fl_Button(215, 185, 25, 20, "set");
            o->labelsize(11);
            o->callback((Fl_Callback*)set_min_size_cb);
          } // Fl_Button* o
          { Fl_Value_Input* o = new Fl_Value_Input(245, 185, 55, 20, "Maximum Size:");
            o->tooltip("The maximum value of the widget.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)max_w_cb);
            o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* o
          { Fl_Value_Input* o = new Fl_Value_Input(305, 185, 55, 20);
            o->tooltip("The resolution of the widget value.");
            o->labelsize(11);
            o->maximum(2048);
            o->step(1);
            o->textsize(11);
            o->callback((Fl_Callback*)max_h_cb);
            o->align(Fl_Align(FL_ALIGN_TOP_LEFT));
          } // Fl_Value_Input* o
          { Fl_Button* o = new Fl_Button(365, 185, 25, 20, "set");
            o->labelsize(11);
            o->callback((Fl_Callback*)set_max_size_cb);
          } // Fl_Button* o
          { Fl_Box* o = new Fl_Box(395, 185, 0, 20);
            Fl_Group::current()->resizable(o);
          } // Fl_Box* o
          o->end();
        } // Fl_Group* o
        { // This is a special button that grabs keystrokes directly
          Shortcut_Button* o = new Shortcut_Button(95, 210, 310, 20, "Shortcut:");
          o->tooltip("The shortcut key for the widget.");
          o->box(FL_DOWN_BOX);
          o->color(FL_BACKGROUND2_COLOR);
          o->selection_color(FL_BACKGROUND2_COLOR);
          o->labeltype(FL_NORMAL_LABEL);
          o->labelfont(1);
          o->labelsize(11);
          o->labelcolor(FL_FOREGROUND_COLOR);
          o->callback((Fl_Callback*)shortcut_in_cb);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          o->when(FL_WHEN_RELEASE);
        } // Shortcut_Button* o
        { Fl_Group* o = new Fl_Group(95, 235, 300, 20, "X Class:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Input* o = new Fl_Input(95, 235, 95, 20, ":");
            o->tooltip("The X resource class.");
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)xclass_cb);
            Fl_Group::current()->resizable(o);
          } // Fl_Input* o
          { Fl_Light_Button* o = new Fl_Light_Button(195, 235, 60, 20, "Border");
            o->tooltip("Add a border around the window.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)border_cb);
          } // Fl_Light_Button* o
          { Fl_Light_Button* o = new Fl_Light_Button(260, 235, 55, 20, "Modal");
            o->tooltip("Make the window modal.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)modal_cb);
          } // Fl_Light_Button* o
          { Fl_Light_Button* o = new Fl_Light_Button(320, 235, 75, 20, "Nonmodal");
            o->tooltip("Make the window non-modal.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)non_modal_cb);
            o->align(Fl_Align(132|FL_ALIGN_INSIDE));
          } // Fl_Light_Button* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 260, 305, 20, "Attributes:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Light_Button* o = new Fl_Light_Button(95, 260, 60, 20, "Visible");
            o->tooltip("Show the widget.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)visible_cb);
          } // Fl_Light_Button* o
          { Fl_Light_Button* o = new Fl_Light_Button(160, 260, 60, 20, "Active");
            o->tooltip("Activate the widget.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)active_cb);
          } // Fl_Light_Button* o
          { Fl_Light_Button* o = new Fl_Light_Button(225, 260, 75, 20, "Resizable");
            o->tooltip("Make the widget resizable.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)resizable_cb);
            o->when(FL_WHEN_CHANGED);
          } // Fl_Light_Button* o
          { Fl_Light_Button* o = new Fl_Light_Button(305, 260, 70, 20, "Hotspot");
            o->tooltip("Center the window under this widget.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)hotspot_cb);
            o->when(FL_WHEN_CHANGED);
          } // Fl_Light_Button* o
          { Fl_Box* o = new Fl_Box(395, 260, 0, 20);
            o->labelsize(11);
            Fl_Group::current()->resizable(o);
          } // Fl_Box* o
          o->end();
        } // Fl_Group* o
        { Fl_Input* o = new Fl_Input(95, 285, 310, 20, "Tooltip:");
          o->tooltip("The tooltip text for the widget.\nUse Ctrl-J for newlines.");
          o->labelfont(1);
          o->labelsize(11);
          o->textsize(11);
          o->callback((Fl_Callback*)tooltip_cb);
        } // Fl_Input* o
        { Fl_Box* o = new Fl_Box(95, 305, 300, 5);
          o->labelsize(11);
          Fl_Group::current()->resizable(o);
        } // Fl_Box* o
        o->end();
        Fl_Group::current()->resizable(o);
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(10, 30, 400, 330, "Style");
        o->labelsize(11);
        o->callback((Fl_Callback*)propagate_load);
        o->when(FL_WHEN_NEVER);
        o->hide();
        { Fl_Group* o = new Fl_Group(95, 40, 309, 20, "Label Font:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Choice* o = new Fl_Choice(95, 40, 170, 20);
            o->tooltip("The style of the label text.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)labelfont_cb);
            Fl_Group::current()->resizable(o);
            o->menu(fontmenu);
          } // Fl_Choice* o
          { Fl_Value_Input* o = new Fl_Value_Input(264, 40, 50, 20);
            o->tooltip("The size of the label text.");
            o->labelsize(11);
            o->maximum(100);
            o->step(1);
            o->value(14);
            o->textsize(11);
            o->callback((Fl_Callback*)labelsize_cb);
          } // Fl_Value_Input* o
          { Fl_Button* o = new Fl_Button(314, 40, 90, 20, "Label Color");
            o->tooltip("The color of the label text.");
            o->labelsize(11);
            o->callback((Fl_Callback*)labelcolor_cb);
          } // Fl_Button* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 65, 309, 20, "Box:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Choice* o = new Fl_Choice(95, 65, 219, 20);
            o->tooltip("The \"up\" box of the widget.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)box_cb);
            Fl_Group::current()->resizable(o);
            o->menu(boxmenu);
          } // Fl_Choice* o
          { Fl_Button* o = new Fl_Button(314, 65, 90, 20, "Color");
            o->tooltip("The background color of the widget.");
            o->labelsize(11);
            o->callback((Fl_Callback*)color_cb);
          } // Fl_Button* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 90, 309, 20, "Down Box:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Choice* o = new Fl_Choice(95, 90, 219, 20);
            o->tooltip("The \"down\" box of the widget.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)down_box_cb);
            Fl_Group::current()->resizable(o);
            o->menu(boxmenu);
          } // Fl_Choice* o
          { Fl_Button* o = new Fl_Button(314, 90, 90, 20, "Select Color");
            o->tooltip("The selection color of the widget.");
            o->labelsize(11);
            o->callback((Fl_Callback*)color2_cb);
          } // Fl_Button* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 115, 309, 20, "Text Font:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Choice* o = new Fl_Choice(95, 115, 170, 20);
            o->tooltip("The value text style.");
            o->box(FL_DOWN_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)textfont_cb);
            Fl_Group::current()->resizable(o);
            o->menu(fontmenu);
          } // Fl_Choice* o
          { Fl_Value_Input* o = new Fl_Value_Input(264, 115, 50, 20);
            o->tooltip("The value text size.");
            o->labelsize(11);
            o->maximum(100);
            o->step(1);
            o->value(14);
            o->textsize(11);
            o->callback((Fl_Callback*)textsize_cb);
          } // Fl_Value_Input* o
          { Fl_Button* o = new Fl_Button(314, 115, 90, 20, "Text Color");
            o->tooltip("The value text color.");
            o->labelsize(11);
            o->callback((Fl_Callback*)textcolor_cb);
          } // Fl_Button* o
          o->end();
        } // Fl_Group* o
        { Fl_Box* o = new Fl_Box(95, 140, 300, 40);
          o->labelsize(11);
          Fl_Group::current()->resizable(o);
        } // Fl_Box* o
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(10, 30, 400, 330, "C++");
        o->labelsize(11);
        o->callback((Fl_Callback*)propagate_load);
        o->when(FL_WHEN_NEVER);
        o->hide();
        { Fl_Group* o = new Fl_Group(95, 40, 310, 20, "Class:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Input* o = new Fl_Input(95, 40, 172, 20);
            o->tooltip("The widget subclass.");
            o->labelfont(1);
            o->labelsize(11);
            o->textfont(4);
            o->textsize(11);
            o->callback((Fl_Callback*)subclass_cb, (void*)(4));
            Fl_Group::current()->resizable(o);
          } // Fl_Input* o
          { Fl_Choice* o = new Fl_Choice(265, 40, 140, 20);
            o->tooltip("The widget subtype.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)subtype_cb);
          } // Fl_Choice* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 65, 310, 20, "Name:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Input* o = new Fl_Input(95, 65, 235, 20);
            o->tooltip("The name of the widget.");
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)name_cb);
            Fl_Group::current()->resizable(o);
          } // Fl_Input* o
          { Fl_Choice* o = new Fl_Choice(330, 65, 75, 20);
            o->tooltip("Change member access attribute.");
            o->down_box(FL_BORDER_BOX);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)name_public_member_cb);
            o->when(FL_WHEN_CHANGED);
            o->menu(menu_2);
          } // Fl_Choice* o
          { Fl_Choice* o = new Fl_Choice(330, 65, 75, 20);
            o->tooltip("Change widget accessibility.");
            o->down_box(FL_BORDER_BOX);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)name_public_cb);
            o->when(FL_WHEN_CHANGED);
            o->menu(menu_3);
          } // Fl_Choice* o
          o->end();
        } // Fl_Group* o
        { v_input[0] = new Fl_Input(95, 90, 310, 20, "Extra Code:");
          v_input[0]->tooltip("Extra initialization code for the widget.");
          v_input[0]->labelfont(1);
          v_input[0]->labelsize(11);
          v_input[0]->textfont(4);
          v_input[0]->textsize(11);
          v_input[0]->callback((Fl_Callback*)v_input_cb, (void*)(0));
        } // Fl_Input* v_input[0]
        { v_input[1] = new Fl_Input(95, 110, 310, 20);
          v_input[1]->tooltip("Extra initialization code for the widget.");
          v_input[1]->labelsize(11);
          v_input[1]->textfont(4);
          v_input[1]->textsize(11);
          v_input[1]->callback((Fl_Callback*)v_input_cb, (void*)(1));
        } // Fl_Input* v_input[1]
        { v_input[2] = new Fl_Input(95, 130, 310, 20);
          v_input[2]->tooltip("Extra initialization code for the widget.");
          v_input[2]->labelsize(11);
          v_input[2]->textfont(4);
          v_input[2]->textsize(11);
          v_input[2]->callback((Fl_Callback*)v_input_cb, (void*)(2));
        } // Fl_Input* v_input[2]
        { v_input[3] = new Fl_Input(95, 150, 310, 20);
          v_input[3]->tooltip("Extra initialization code for the widget.");
          v_input[3]->labelsize(11);
          v_input[3]->textfont(4);
          v_input[3]->textsize(11);
          v_input[3]->callback((Fl_Callback*)v_input_cb, (void*)(3));
        } // Fl_Input* v_input[3]
        { Fl_Tile* o = new Fl_Tile(95, 175, 310, 130);
          o->callback((Fl_Callback*)cb_1);
          { Fl_Group* o = new Fl_Group(95, 175, 310, 48);
            o->box(FL_FLAT_BOX);
            { wComment = new Fl_Text_Editor(95, 175, 310, 45, "Comment:");
              wComment->tooltip("Write a comment that will appear in the source code and in the widget tree ov\
erview.");
              wComment->box(FL_DOWN_BOX);
              wComment->labelfont(1);
              wComment->labelsize(11);
              wComment->textfont(6);
              wComment->textsize(11);
              wComment->textcolor((Fl_Color)59);
              wComment->align(Fl_Align(FL_ALIGN_LEFT));
              wComment->when(FL_WHEN_CHANGED);
              Fl_Group::current()->resizable(wComment);
              wComment->buffer(new Fl_Text_Buffer());
              wComment->callback((Fl_Callback*)comment_cb);
            } // Fl_Text_Editor* wComment
            o->end();
          } // Fl_Group* o
          { Fl_Group* o = new Fl_Group(95, 223, 310, 82);
            o->box(FL_FLAT_BOX);
            { wCallback = new CodeEditor(95, 225, 310, 80, "Callback:");
              wCallback->tooltip("The callback function or code for the widget. Use the variable name \'o\' to \
access the Widget pointer and \'v\' to access the user value.");
              wCallback->box(FL_DOWN_BOX);
              wCallback->color(FL_BACKGROUND2_COLOR);
              wCallback->selection_color(FL_SELECTION_COLOR);
              wCallback->labeltype(FL_NORMAL_LABEL);
              wCallback->labelfont(1);
              wCallback->labelsize(11);
              wCallback->labelcolor(FL_FOREGROUND_COLOR);
              wCallback->textfont(4);
              wCallback->textsize(11);
              wCallback->callback((Fl_Callback*)callback_cb);
              wCallback->align(Fl_Align(FL_ALIGN_LEFT));
              wCallback->when(FL_WHEN_RELEASE);
              Fl_Group::current()->resizable(wCallback);
            } // CodeEditor* wCallback
            o->end();
          } // Fl_Group* o
          o->end();
          Fl_Group::current()->resizable(o);
        } // Fl_Tile* o
        { Fl_Group* o = new Fl_Group(95, 310, 310, 20, "User Data:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Input* o = new Fl_Input(95, 310, 158, 20);
            o->tooltip("The user data to pass into the callback code.");
            o->labelfont(1);
            o->labelsize(11);
            o->textfont(4);
            o->textsize(11);
            o->callback((Fl_Callback*)user_data_cb);
            Fl_Group::current()->resizable(o);
          } // Fl_Input* o
          { Fl_Choice* o = new Fl_Choice(300, 310, 105, 20, "When:");
            o->tooltip("When to call the callback function.");
            o->box(FL_THIN_UP_BOX);
            o->down_box(FL_BORDER_BOX);
            o->labelfont(1);
            o->labelsize(11);
            o->textsize(11);
            o->callback((Fl_Callback*)when_cb);
            o->when(FL_WHEN_CHANGED);
            o->menu(whenmenu);
          } // Fl_Choice* o
          o->end();
        } // Fl_Group* o
        { Fl_Group* o = new Fl_Group(95, 335, 310, 20, "Type:");
          o->labelfont(1);
          o->labelsize(11);
          o->callback((Fl_Callback*)propagate_load);
          o->align(Fl_Align(FL_ALIGN_LEFT));
          { Fl_Input* o = new Fl_Input(95, 335, 158, 20);
            o->tooltip("The type of the user data.");
            o->labelfont(1);
            o->labelsize(11);
            o->textfont(4);
            o->textsize(11);
            o->callback((Fl_Callback*)user_data_type_cb);
            Fl_Group::current()->resizable(o);
          } // Fl_Input* o
          { Fl_Light_Button* o = new Fl_Light_Button(300, 335, 105, 20, "No Change");
            o->tooltip("Call the callback even if the value has not changed.");
            o->selection_color((Fl_Color)1);
            o->labelsize(11);
            o->callback((Fl_Callback*)when_button_cb);
          } // Fl_Light_Button* o
          o->end();
        } // Fl_Group* o
        o->end();
      } // Fl_Group* o
      o->end();
      Fl_Group::current()->resizable(o);
    } // Fl_Tabs* o
    { Fl_Group* o = new Fl_Group(9, 370, 400, 20);
      o->labelsize(11);
      { Fl_Box* o = new Fl_Box(9, 370, 20, 20);
        o->labelsize(11);
        Fl_Group::current()->resizable(o);
      } // Fl_Box* o
      { Fl_Button* o = new Fl_Button(240, 370, 99, 20, "Hide &Overlays");
        o->tooltip("Hide the widget overlay box.");
        o->labelsize(11);
        o->labelcolor((Fl_Color)1);
        o->callback((Fl_Callback*)overlay_cb);
      } // Fl_Button* o
      { Fl_Button* o = new Fl_Button(66, 370, 80, 20, "Revert");
        o->labelsize(11);
        o->callback((Fl_Callback*)revert_cb);
        o->hide();
      } // Fl_Button* o
      { Fl_Return_Button* o = new Fl_Return_Button(344, 370, 64, 20, "Close");
        o->labelsize(11);
        o->callback((Fl_Callback*)ok_cb);
      } // Fl_Return_Button* o
      { Fl_Button* o = new Fl_Button(339, 370, 70, 20, "Cancel");
        o->labelsize(11);
        o->callback((Fl_Callback*)cancel_cb);
        o->hide();
      } // Fl_Button* o
      { wLiveMode = new Fl_Button(151, 370, 84, 20, "Live &Mode");
        wLiveMode->tooltip("Create a live duplicate of the selected widgets to test resizing and menu beh\
avior.");
        wLiveMode->type(1);
        wLiveMode->labelsize(11);
        wLiveMode->callback((Fl_Callback*)live_mode_cb);
      } // Fl_Button* wLiveMode
      o->end();
    } // Fl_Group* o
    o->size_range(o->w(), o->h());
    o->size_range(420, 400);
    o->end();
  } // Fl_Double_Window* o
  return w;
}

//
// End of "$Id$".
//
