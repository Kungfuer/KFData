﻿/**************************

This class is automatically generated by KFDataTool

***********************/
\#pragma once
\#include "Format/KFDataFormat.h"
#if $export_api==""
	#set $export_api="KFENGINERT_API"
#end if

namespace ${NS}
{
    class $export_api Any${CLASS}
    {
    public:
#for $data in $datas
        static kfAny Read${data.class}(KFByteArray& buffarr, kfAny obj = nullptr);
        static void Write${data.class}(KFByteArray& buffarr, kfAny obj = nullptr);
        static void Delete${data.class}(kfAny obj);
        
 #end for
        static bool IsRegisted;
    	static void Regist();
    };

}
