﻿/**************************

This class is automatically generated by KFDataTool

***********************/
\#include "Any${CLASS}.h"
#for $includestr in $includes 
\#include "${includestr}"
#end for

namespace ${NS}
{
#for $data in $datas
    kfAny Any${CLASS}::Read${data.class}(KFByteArray& buffarr, kfAny obj)
    {
        ${data.class}* cast_obj = static_cast<${data.class}*>(obj);
        return ${data.class}F::Read(buffarr, cast_obj);
    }
    void Any${CLASS}::Write${data.class}(KFByteArray& buffarr, kfAny obj)
    {
        ${data.class}* cast_obj = static_cast<${data.class}*>(obj);
        ${data.class}F::Write(buffarr, cast_obj);
    }
    void Any${CLASS}::Delete${data.class}(kfAny obj)
    {
        ${data.class}* cast_obj = static_cast<${data.class}*>(obj);
        kfDel(cast_obj);
    }

#end for
    void Any${CLASS}::Regist()
    {
        if(IsRegisted)
            return;
        IsRegisted = true;

      #for $data in $datas
        REG_KFD_FORMAT_ANY("${data.class}", &Any${CLASS}::Read${data.class}, &Any${CLASS}::Write${data.class},&Any${CLASS}::Delete${data.class});
      #end for
    }



    bool Any${CLASS}::IsRegisted = false;
}
