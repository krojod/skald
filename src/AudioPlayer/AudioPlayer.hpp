#ifndef AUDIOPLAYER_HPP
#define AUDIOPLAYER_HPP
#include <string>

using std::string;
class AudioPlayer
{
  private:
  static string const inline soundSystemCall = "aplay"; 
  public:
  /// @brief plays a sound for testing purposes
  void playSound(string path);
};

#endif