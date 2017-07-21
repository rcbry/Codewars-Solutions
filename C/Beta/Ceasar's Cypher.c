void rot13(char* str, int sizeOfStr)
{
  for (int i=0;i<sizeOfStr;++i)
  {
    switch (str[i])
    {
      case 'a': str[i] = 'n'; break;
      case 'b': str[i] = 'o'; break;
      case 'c': str[i] = 'p'; break;
      case 'd': str[i] = 'q'; break;
      case 'e': str[i] = 'r'; break;
      case 'f': str[i] = 's'; break;
      case 'g': str[i] = 't'; break;
      case 'h': str[i] = 'u'; break;
      case 'i': str[i] = 'v'; break;
      case 'j': str[i] = 'w'; break;
      case 'k': str[i] = 'x'; break;
      case 'l': str[i] = 'y'; break;
      case 'm': str[i] = 'z'; break;
      case 'n': str[i] = 'a'; break;
      case 'o': str[i] = 'b'; break;
      case 'p': str[i] = 'c'; break;
      case 'q': str[i] = 'd'; break;
      case 'r': str[i] = 'e'; break;
      case 's': str[i] = 'f'; break;
      case 't': str[i] = 'g'; break;
      case 'u': str[i] = 'h'; break;
      case 'v': str[i] = 'i'; break;
      case 'w': str[i] = 'j'; break;
      case 'x': str[i] = 'k'; break;
      case 'y': str[i] = 'l'; break;
      case 'z': str[i] = 'm'; break;
    }
  }
}
