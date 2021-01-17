#include <cassert>
#include <leveldb/db.h>

#include"leveldbLearn.h"

namespace AlwaysLove{
    void readAndWrite(){
        leveldb::DB* db;
        leveldb::Options options;
        options.create_if_missing = true;
        leveldb::Status status = leveldb::DB::Open(options, "/root/leveldb", &db);
        assert(status.ok());

        std::string key = "ID_1";
        std::string writeValue = "TONY";
        std::string readValue;
        db->Put(leveldb::WriteOptions(), key, writeValue);

        db->Get(leveldb::ReadOptions(), key, &readValue);

        db->Delete(leveldb::WriteOptions(), key);

        delete db;
    }
}

