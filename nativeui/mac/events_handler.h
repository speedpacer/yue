// Copyright 2016 Cheng Zhao. All rights reserved.
// Use of this source code is governed by the license that can be found in the
// LICENSE file.

#ifndef NATIVEUI_MAC_EVENTS_HANDLER_H_
#define NATIVEUI_MAC_EVENTS_HANDLER_H_

#import <Cocoa/Cocoa.h>

namespace nu {

class View;

// Return whether a class is part of nativeui system.
bool IsNUView(id view);

// Return whether a class has been added with event handlers.
bool EventHandlerInstalled(Class cl);

// Dynamically add event methods to a NSView.
void AddMouseEventHandlerToClass(Class cl);
void AddKeyEventHandlerToClass(Class cl);
void AddViewMethodsToClass(Class cl);

// Dispatch mouse events to a view.
bool DispatchMouseEvent(View* view, NSEvent* event);

}  // namespace nu

#endif  // NATIVEUI_MAC_EVENTS_HANDLER_H_
