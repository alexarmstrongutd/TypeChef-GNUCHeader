
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_classpath_jdwp_processor_MethodCommandSet__
#define __gnu_classpath_jdwp_processor_MethodCommandSet__

#pragma interface

#include <gnu/classpath/jdwp/processor/CommandSet.h>
extern "Java"
{
  namespace gnu
  {
    namespace classpath
    {
      namespace jdwp
      {
        namespace processor
        {
            class MethodCommandSet;
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
    }
  }
}

class gnu::classpath::jdwp::processor::MethodCommandSet : public ::gnu::classpath::jdwp::processor::CommandSet
{

public:
  MethodCommandSet();
  virtual jboolean runCommand(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *, jbyte);
private:
  void executeLineTable(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeVariableTable(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeByteCodes(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeIsObsolete(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
  void executeVariableTableWithGeneric(::java::nio::ByteBuffer *, ::java::io::DataOutputStream *);
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_classpath_jdwp_processor_MethodCommandSet__
