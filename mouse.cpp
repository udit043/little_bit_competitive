#include <iostream>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

using namespace std;

int main()
{
    Display *dpy;
    Window root_window, root, ret_root, ret_child;
    int root_x, root_y, win_x, win_y; unsigned int mask;

    dpy = XOpenDisplay(0);
    root_window = XRootWindow(dpy, 0);
    root = XDefaultRootWindow(dpy);
    XSelectInput(dpy, root_window, KeyReleaseMask);
	XWarpPointer(dpy, None, root_window, 0, 0, 0, 0, 100, 100);
	XFlush(dpy);

while(1)
{
	XQueryPointer(dpy, root, &ret_root, &ret_child, &root_x, &root_y,&win_x, &win_y, &mask);
	cout << "+" << root_x << "+" << root_y << "\n";
}

	return 0;
}
