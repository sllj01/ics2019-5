#include "klib.h"

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  size_t cnt=0;
  while(s[cnt]!='\0') cnt++;
  //_putc(cnt);
  return cnt;
}

char *strcpy(char* dst,const char* src) {
  size_t i=0;
  while(src[i]!='\0'){
    dst[i]=src[i];
    i++;
  }
  dst[i]='\0';
  return dst;
}

char* strncpy(char* dst, const char* src, size_t n) {
  size_t i=0;
  while(src[i]!='\0' && i<n){
    dst[i] = src[i];
    i++;
  }
  assert( i!=n );
  dst[i]='\0';
  return dst;
}

char* strcat(char* dst, const char* src) {
  size_t init = strlen(dst);
  int i = 0;
  while(src[i]!='\0'){
    dst[init+i] = src[i];
    i++;
  }
  dst[init+i] = '\0';
  return dst;
}

int strcmp(const char* s1, const char* s2) {
  for(;*s1==*s2;++s1,++s2)
      if(*s1=='\0')
          return 0;
  return((*s1<*s2)?-1:+1);
} 

int strncmp(const char* s1, const char* s2, size_t n) {
  size_t i=0;
  while(*s1==*s2 && i<n ){
    if(i==n) return 0;
    else if (*s1 == '\0') return 0;
    s1++;
    s2++;
    i++;
  }
  return ((*s1 < *s2)? -1:+1);
}

void* memset(void* v,int c,size_t n) {
  int i;
  for (i = 0; i < n; i++){
    ((char*)v)[i] = (unsigned char)c;
  }
  return v;
}

void* memcpy(void* out, const void* in, size_t n) {
  int i;
  for (i = 0; i < n; i++){
    ((char*)out)[i] = ((char*)in)[i];
  }
  return out;
}

int memcmp(const void* s1, const void* s2, size_t n){
  int i, ans = 0;
  for (i = 0; i < n; i++){
    ans = ((char*)s1)[i] - ((char*)s2)[i];
    if (ans != 0){
      return ans;
    }
  }
  return 0;
}

#endif
