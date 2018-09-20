#ifndef _USEFILE_H_
#define _USEFILE_H_


class UseFile {
 private:
  std::fstream fileStream;
 public:
 UseFile() : fileStream(inputFile) {}
};


#endif  // _USEFILE_H_
