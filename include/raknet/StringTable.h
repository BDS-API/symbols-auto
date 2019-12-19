#pragma once

using namespace RakNet;

class StringTable {

public:

    StringTable(void);
    void AddReference(void);
    void RemoveReference(void);
    void Instance(void);
    void AddString(char const*, bool);
    void EncodeString(char const*, int, RakNet::BitStream *);
    void LogStringNotFound(char const*);
    void DecodeString(char *, int, RakNet::BitStream *);
};
