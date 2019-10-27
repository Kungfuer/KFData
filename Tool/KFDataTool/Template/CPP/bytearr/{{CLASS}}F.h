﻿/**************************

This class is automatically generated by KFDataTool

***********************/


\#pragma once

\#include "Format/KFDataFormat.h"
#for $includestr in $data.includes 
\#include "${includestr}"
#end for
#if $data.extend 
\#include "${data.extend}F.h"
#end if

#if $export_api==""
	#set $export_api="KFENGINERT_API"
#end if
namespace ${NS}
{
    class $export_api ${data.class}F
    {
    public:
        static ${data.class}* Read(KFByteArray& buffarr,${data.class}* obj = nullptr);
        static void Write(KFByteArray& buffarr,${data.class}* obj);
        static ${data.class}* Read${data.class}(KFByteArray& buffarr,${data.class}* obj = nullptr);
        static void Write${data.class}(KFByteArray& buffarr,${data.class}* obj);
    };
}