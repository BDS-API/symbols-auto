#pragma once

class IFilePicker {

    virtual void ~IFilePicker();
    virtual void ~IFilePicker();
    virtual void initFilePick(Core::Path const&, std::function<void ()(bool, FileInfo)>);
    virtual void readBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> &);
    virtual void writeBytes(FileInfo const&, unsigned long, unsigned long, std::vector<unsigned char, std::allocator<unsigned char>> const&);
}
