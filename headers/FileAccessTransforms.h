#pragma once

class FileAccessTransforms {

    virtual void ~FileAccessTransforms();
    virtual void ~FileAccessTransforms();
    virtual void readTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;
    virtual void writeTransform(std::vector<unsigned char, std::allocator<unsigned char>> &)const;
}
