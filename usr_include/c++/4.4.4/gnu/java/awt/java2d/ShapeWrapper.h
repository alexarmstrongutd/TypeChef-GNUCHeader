
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_java2d_ShapeWrapper__
#define __gnu_java_awt_java2d_ShapeWrapper__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace java2d
        {
            class ShapeWrapper;
        }
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class Rectangle;
        class Shape;
      namespace geom
      {
          class AffineTransform;
          class PathIterator;
          class Point2D;
          class Rectangle2D;
      }
    }
  }
}

class gnu::java::awt::java2d::ShapeWrapper : public ::java::lang::Object
{

public:
  ShapeWrapper(::java::awt::Shape *);
  virtual jboolean contains(jdouble, jdouble);
  virtual jboolean contains(::java::awt::geom::Point2D *);
  virtual jboolean contains(jdouble, jdouble, jdouble, jdouble);
  virtual jboolean contains(::java::awt::geom::Rectangle2D *);
  virtual ::java::awt::Rectangle * getBounds();
  virtual ::java::awt::geom::Rectangle2D * getBounds2D();
  virtual ::java::awt::geom::PathIterator * getPathIterator(::java::awt::geom::AffineTransform *);
  virtual ::java::awt::geom::PathIterator * getPathIterator(::java::awt::geom::AffineTransform *, jdouble);
  virtual jboolean intersects(jdouble, jdouble, jdouble, jdouble);
  virtual jboolean intersects(::java::awt::geom::Rectangle2D *);
private:
  ::java::awt::Shape * __attribute__((aligned(__alignof__( ::java::lang::Object)))) shape;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_java2d_ShapeWrapper__
