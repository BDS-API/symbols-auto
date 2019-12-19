#pragma once

class InteractPacket : Packet {

public:
    virtual InteractPacket::~InteractPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    InteractPacket(void);
    InteractPacket(InteractPacket::Action, ActorRuntimeID, Vec3 const&);
};
