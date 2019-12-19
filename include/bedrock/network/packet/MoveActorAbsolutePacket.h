#pragma once

class MoveActorAbsolutePacket : Packet {

public:
    virtual MoveActorAbsolutePacket::~MoveActorAbsolutePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    MoveActorAbsolutePacket(void);
    MoveActorAbsolutePacket(MoveActorAbsoluteData const&);
};
