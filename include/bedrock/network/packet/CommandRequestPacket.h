#pragma once

class CommandRequestPacket : Packet {

public:
    virtual CommandRequestPacket::~CommandRequestPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandRequestPacket(void);
    CommandRequestPacket(CommandContext &, bool);
    void createCommandContext(NetworkIdentifier const&, Level &, int)const;
    void getInternalSource(void)const;
};
