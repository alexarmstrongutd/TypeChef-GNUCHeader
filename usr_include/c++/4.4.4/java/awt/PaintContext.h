
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_PaintContext__
#define __java_awt_PaintContext__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class PaintContext;
      namespace image
      {
          class ColorModel;
          class Raster;
      }
    }
  }
}

class java::awt::PaintContext : public ::java::lang::Object
{

public:
  virtual void dispose() = 0;
  virtual ::java::awt::image::ColorModel * getColorModel() = 0;
  virtual ::java::awt::image::Raster * getRaster(jint, jint, jint, jint) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __java_awt_PaintContext__
