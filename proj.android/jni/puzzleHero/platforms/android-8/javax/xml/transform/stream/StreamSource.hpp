/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.transform.stream.StreamSource
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_DECL
#define J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class File; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace io { class Reader; } } }
namespace j2cpp { namespace javax { namespace xml { namespace transform { class Source; } } } }


#include <java/io/File.hpp>
#include <java/io/InputStream.hpp>
#include <java/io/Reader.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <javax/xml/transform/Source.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace transform { namespace stream {

	class StreamSource;
	class StreamSource
		: public object<StreamSource>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_FIELD(0)

		explicit StreamSource(jobject jobj)
		: object<StreamSource>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<javax::xml::transform::Source>() const;


		StreamSource();
		StreamSource(local_ref< java::io::InputStream > const&);
		StreamSource(local_ref< java::io::InputStream > const&, local_ref< java::lang::String > const&);
		StreamSource(local_ref< java::io::Reader > const&);
		StreamSource(local_ref< java::io::Reader > const&, local_ref< java::lang::String > const&);
		StreamSource(local_ref< java::lang::String > const&);
		StreamSource(local_ref< java::io::File > const&);
		void setInputStream(local_ref< java::io::InputStream >  const&);
		local_ref< java::io::InputStream > getInputStream();
		void setReader(local_ref< java::io::Reader >  const&);
		local_ref< java::io::Reader > getReader();
		void setPublicId(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getPublicId();
		void setSystemId(local_ref< java::lang::String >  const&);
		local_ref< java::lang::String > getSystemId();
		void setSystemId(local_ref< java::io::File >  const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > FEATURE;
	}; //class StreamSource

} //namespace stream
} //namespace transform
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_IMPL
#define J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_IMPL

namespace j2cpp {



javax::xml::transform::stream::StreamSource::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::xml::transform::stream::StreamSource::operator local_ref<javax::xml::transform::Source>() const
{
	return local_ref<javax::xml::transform::Source>(get_jobject());
}


javax::xml::transform::stream::StreamSource::StreamSource()
: object<javax::xml::transform::stream::StreamSource>(
	call_new_object<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(0),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



javax::xml::transform::stream::StreamSource::StreamSource(local_ref< java::io::InputStream > const &a0)
: object<javax::xml::transform::stream::StreamSource>(
	call_new_object<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(1),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



javax::xml::transform::stream::StreamSource::StreamSource(local_ref< java::io::InputStream > const &a0, local_ref< java::lang::String > const &a1)
: object<javax::xml::transform::stream::StreamSource>(
	call_new_object<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(2),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



javax::xml::transform::stream::StreamSource::StreamSource(local_ref< java::io::Reader > const &a0)
: object<javax::xml::transform::stream::StreamSource>(
	call_new_object<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(3),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}



javax::xml::transform::stream::StreamSource::StreamSource(local_ref< java::io::Reader > const &a0, local_ref< java::lang::String > const &a1)
: object<javax::xml::transform::stream::StreamSource>(
	call_new_object<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(4),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(4)
	>(a0, a1)
)
{
}



javax::xml::transform::stream::StreamSource::StreamSource(local_ref< java::lang::String > const &a0)
: object<javax::xml::transform::stream::StreamSource>(
	call_new_object<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(5),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(5)
	>(a0)
)
{
}



javax::xml::transform::stream::StreamSource::StreamSource(local_ref< java::io::File > const &a0)
: object<javax::xml::transform::stream::StreamSource>(
	call_new_object<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(6),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(6)
	>(a0)
)
{
}


void javax::xml::transform::stream::StreamSource::setInputStream(local_ref< java::io::InputStream > const &a0)
{
	return call_method<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(7),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(7), 
		void
	>(get_jobject(), a0);
}

local_ref< java::io::InputStream > javax::xml::transform::stream::StreamSource::getInputStream()
{
	return call_method<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(8),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(8), 
		local_ref< java::io::InputStream >
	>(get_jobject());
}

void javax::xml::transform::stream::StreamSource::setReader(local_ref< java::io::Reader > const &a0)
{
	return call_method<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(9),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(9), 
		void
	>(get_jobject(), a0);
}

local_ref< java::io::Reader > javax::xml::transform::stream::StreamSource::getReader()
{
	return call_method<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(10),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(10), 
		local_ref< java::io::Reader >
	>(get_jobject());
}

void javax::xml::transform::stream::StreamSource::setPublicId(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(11),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(11), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > javax::xml::transform::stream::StreamSource::getPublicId()
{
	return call_method<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(12),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(12), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void javax::xml::transform::stream::StreamSource::setSystemId(local_ref< java::lang::String > const &a0)
{
	return call_method<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(13),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(13), 
		void
	>(get_jobject(), a0);
}

local_ref< java::lang::String > javax::xml::transform::stream::StreamSource::getSystemId()
{
	return call_method<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(14),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(14), 
		local_ref< java::lang::String >
	>(get_jobject());
}

void javax::xml::transform::stream::StreamSource::setSystemId(local_ref< java::io::File > const &a0)
{
	return call_method<
		javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_NAME(15),
		javax::xml::transform::stream::StreamSource::J2CPP_METHOD_SIGNATURE(15), 
		void
	>(get_jobject(), a0);
}


static_field<
	javax::xml::transform::stream::StreamSource::J2CPP_CLASS_NAME,
	javax::xml::transform::stream::StreamSource::J2CPP_FIELD_NAME(0),
	javax::xml::transform::stream::StreamSource::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> javax::xml::transform::stream::StreamSource::FEATURE;


J2CPP_DEFINE_CLASS(javax::xml::transform::stream::StreamSource,"javax/xml/transform/stream/StreamSource")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,1,"<init>","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,2,"<init>","(Ljava/io/InputStream;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,3,"<init>","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,4,"<init>","(Ljava/io/Reader;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,5,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,6,"<init>","(Ljava/io/File;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,7,"setInputStream","(Ljava/io/InputStream;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,8,"getInputStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,9,"setReader","(Ljava/io/Reader;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,10,"getReader","()Ljava/io/Reader;")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,11,"setPublicId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,12,"getPublicId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,13,"setSystemId","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,14,"getSystemId","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(javax::xml::transform::stream::StreamSource,15,"setSystemId","(Ljava/io/File;)V")
J2CPP_DEFINE_FIELD(javax::xml::transform::stream::StreamSource,0,"FEATURE","Ljava/lang/String;")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_TRANSFORM_STREAM_STREAMSOURCE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
