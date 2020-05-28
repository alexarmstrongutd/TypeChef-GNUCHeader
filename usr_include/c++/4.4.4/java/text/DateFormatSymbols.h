
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_text_DateFormatSymbols__
#define __java_text_DateFormatSymbols__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace text
    {
        class DateFormatSymbols;
    }
  }
}

class java::text::DateFormatSymbols : public ::java::lang::Object
{

  static JArray< ::java::lang::String * > * getStringArray(::java::util::ResourceBundle *, ::java::lang::String *);
  JArray< JArray< ::java::lang::String * > * > * getZoneStrings(::java::util::ResourceBundle *, ::java::util::Locale *);
  JArray< ::java::lang::String * > * formatsForKey(::java::util::ResourceBundle *, ::java::lang::String *);
public:
  DateFormatSymbols(::java::util::Locale *);
  DateFormatSymbols();
  virtual JArray< ::java::lang::String * > * getAmPmStrings();
  virtual JArray< ::java::lang::String * > * getEras();
  virtual ::java::lang::String * getLocalPatternChars();
  virtual JArray< ::java::lang::String * > * getMonths();
  virtual JArray< ::java::lang::String * > * getShortMonths();
  virtual JArray< ::java::lang::String * > * getShortWeekdays();
  virtual JArray< ::java::lang::String * > * getWeekdays();
  virtual JArray< JArray< ::java::lang::String * > * > * getZoneStrings();
  virtual void setAmPmStrings(JArray< ::java::lang::String * > *);
  virtual void setEras(JArray< ::java::lang::String * > *);
  virtual void setLocalPatternChars(::java::lang::String *);
  virtual void setMonths(JArray< ::java::lang::String * > *);
  virtual void setShortMonths(JArray< ::java::lang::String * > *);
  virtual void setShortWeekdays(JArray< ::java::lang::String * > *);
  virtual void setWeekdays(JArray< ::java::lang::String * > *);
  virtual void setZoneStrings(JArray< JArray< ::java::lang::String * > * > *);
private:
  static jboolean equals(::java::lang::Object *, ::java::lang::Object *);
  static jint hashCode(::java::lang::Object *);
public:
  virtual jboolean equals(::java::lang::Object *);
  virtual ::java::lang::Object * clone();
  virtual jint hashCode();
  static ::java::text::DateFormatSymbols * getInstance();
  static ::java::text::DateFormatSymbols * getInstance(::java::util::Locale *);
public: // actually package-private
  JArray< ::java::lang::String * > * __attribute__((aligned(__alignof__( ::java::lang::Object)))) ampms;
  JArray< ::java::lang::String * > * eras;
private:
  ::java::lang::String * localPatternChars;
public: // actually package-private
  JArray< ::java::lang::String * > * months;
  JArray< ::java::lang::String * > * shortMonths;
  JArray< ::java::lang::String * > * shortWeekdays;
  JArray< ::java::lang::String * > * weekdays;
private:
  static ::java::util::Properties * properties;
  JArray< JArray< ::java::lang::String * > * > * runtimeZoneStrings;
  JArray< JArray< ::java::lang::String * > * > * zoneStrings;
  static const jlong serialVersionUID = -5987973545549424702LL;
  static JArray< ::java::lang::String * > * formatPrefixes;
public: // actually package-private
  JArray< ::java::lang::String * > * dateFormats;
  JArray< ::java::lang::String * > * timeFormats;
public:
  static ::java::lang::Class class$;
};

#endif // __java_text_DateFormatSymbols__
