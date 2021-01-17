#include<iostream>
#include <fstream>
#include <string>
#include "addressbook.pb.h"

#include"protoLearn.h"

namespace AlwaysLove{

    int writeToFile(){
        GOOGLE_PROTOBUF_VERIFY_VERSION;

        tutorial::AddressBook address_book;

        tutorial::Person* person = address_book.add_people();
        person->set_id(1);
        person->set_name("TONY");
        person->set_email("some@any.com");

        tutorial::Person::PhoneNumber* phone_number = person->add_phones();
        phone_number->set_type(tutorial::Person::MOBILE);
        phone_number->set_number("15563454999");

        // Write the new address book back to disk.
        std::fstream output("/root/proto/address_books", std::ios::out | std::ios::trunc | std::ios::binary);
        if (!address_book.SerializeToOstream(&output)) {
            std::cerr << "Failed to write address book." << std::endl;
            return -1;
        }

        google::protobuf::ShutdownProtobufLibrary();

        return 0;
    }

    int readFromFile(){
        GOOGLE_PROTOBUF_VERIFY_VERSION;
        
        tutorial::AddressBook address_book;
    
        std::fstream input("/root/proto/address_books", std::ios::in | std::ios::binary);
        if (!address_book.ParseFromIstream(&input)) {
            std::cerr << "Failed to parse address book." << std::endl;
            return -1;
        }
    

        for (int i = 0; i < address_book.people_size(); i++) {
            const tutorial::Person& person = address_book.people(i);

            std::cout << "Person ID: " << person.id() << std::endl;
            std::cout << "  Name: " <<person.name() << std::endl;
            if (person.has_email()) {
                std::cout << "  E-mail address: " << person.email() << std::endl;
            }

            for (int j = 0; j < person.phones_size(); j++) {
                const tutorial::Person::PhoneNumber& phone_number = person.phones(j);

                switch (phone_number.type()) {
                    case tutorial::Person::MOBILE:
                        std::cout << "  Mobile phone #: ";
                        break;
                    case tutorial::Person::HOME:
                        std::cout << "  Home phone #: ";
                        break;
                    case tutorial::Person::WORK:
                        std::cout << "  Work phone #: ";
                        break;
                }
                std::cout << phone_number.number() << std::endl;
            }
        }

        // Optional:  Delete all global objects allocated by libprotobuf.
        google::protobuf::ShutdownProtobufLibrary();

        return 0;
    }
}