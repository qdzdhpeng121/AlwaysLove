#include"req.h"

namespace AlwaysLove{

    std::string Req::toString(){
        return "reqId = " + std::to_string(mReqId) + ", reqContent = " + mReqContent;
    }

    void Req::setReqId(unsigned long reqId){
        mReqId = reqId;
    }
    unsigned long Req::getReqId(){
        return mReqId;
    }
    void Req::setReqContent(std::string &reqContent){
        mReqContent = reqContent;
    }
    std::string Req::getReqContent(){
        return mReqContent;
    }
}