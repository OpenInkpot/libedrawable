#ifndef __UPDATES
#define __UPDATES 1
#include "Evas.h"
typedef struct _drawableupdate DrawableUpdate;

struct _drawableupdate
{
   int x, y, w, h;
   DrawableUpdate *next;
};

__hidden DrawableUpdate *__drawable_AddUpdate(DrawableUpdate *u, int x, int y, int w, int h);
__hidden DrawableUpdate *__drawable_MergeUpdate(DrawableUpdate *u, int w, int h, int hgapmax);
__hidden void __drawable_FreeUpdates(DrawableUpdate *u);
__hidden DrawableUpdate *__drawable_DupUpdates(DrawableUpdate *u);
__hidden void __drawable_PropagateUpdates(DrawableUpdate * u, Evas_Object *image);
__hidden DrawableUpdate *
__drawable_AppendUpdates(DrawableUpdate * first, DrawableUpdate *second);
#endif
