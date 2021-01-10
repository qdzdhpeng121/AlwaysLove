#ifndef REQ_H
#define REQ_H

#include<string>

namespace AlwaysLove{

    class Req{
        public:
            Req() = default;
            ~Req() = default;
            Req(unsigned long reqId, std::string &reqContent) : mReqId(reqId), mReqContent(reqContent){}
            void setReqId(unsigned long reqId);
            unsigned long getReqId();
            void setReqContent(std::string &reqContent);
            std::string getReqContent();
            std::string toString();
        private:
            unsigned long mReqId;
            std::string mReqContent;
    };

}

#endif