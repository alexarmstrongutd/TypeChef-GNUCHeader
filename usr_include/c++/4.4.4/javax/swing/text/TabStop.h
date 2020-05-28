
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_TabStop__
#define __javax_swing_text_TabStop__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class TabStop;
      }
    }
  }
}

class javax::swing::text::TabStop : public ::java::lang::Object
{

public:
  TabStop(jfloat);
  TabStop(jfloat, jint, jint);
  virtual jboolean equals(::java::lang::Object *);
  virtual jint getAlignment();
  virtual jint getLeader();
  virtual jfloat getPosition();
  virtual jint hashCode();
  virtual ::java::lang::String * toString();
private:
  static const jlong serialVersionUID = -5381995917363605058LL;
public:
  static const jint ALIGN_LEFT = 0;
  static const jint ALIGN_RIGHT = 1;
  static const jint ALIGN_CENTER = 2;
  static const jint ALIGN_DECIMAL = 4;
  static const jint ALIGN_BAR = 5;
  static const jint LEAD_NONE = 0;
  static const jint LEAD_DOTS = 1;
  static const jint LEAD_HYPHENS = 2;
  static const jint LEAD_UNDERLINE = 3;
  static const jint LEAD_THICKLINE = 4;
  static const jint LEAD_EQUALS = 5;
public: // actually package-private
  jfloat __attribute__((aligned(__alignof__( ::java::lang::Object)))) pos;
  jint align;
  jint leader;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_text_TabStop__
