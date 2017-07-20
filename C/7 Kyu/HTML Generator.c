#include <string.h>
#include <malloc.h>

char *genHTML(const char *startTag, const char *innerHTML, const char *endTag) {
  return strcat(strcat(strcpy((char *)malloc(strlen(innerHTML) + strlen(startTag) + strlen(endTag) + 1), startTag), innerHTML), endTag);
}

char *HTMLGenA(const char *innerHTML)       { return genHTML("<a>",     innerHTML, "</a>");     }
char *HTMLGenB(const char *innerHTML)       { return genHTML("<b>",     innerHTML, "</b>");     }
char *HTMLGenBody(const char *innerHTML)    { return genHTML("<body>",  innerHTML, "</body>");  }
char *HTMLGenDiv(const char *innerHTML)     { return genHTML("<div>",   innerHTML, "</div>");   }
char *HTMLGenSpan(const char *innerHTML)    { return genHTML("<span>",  innerHTML, "</span>");  }
char *HTMLGenTitle(const char *innerHTML)   { return genHTML("<title>", innerHTML, "</title>"); }
char *HTMLGenComment(const char *innerHTML) { return genHTML("<!--",    innerHTML, "-->");      }
