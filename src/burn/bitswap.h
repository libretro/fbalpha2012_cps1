#define BIT(x,n) 		(((x)>>(n))&1)

/* ----- macros for accessing bytes and words within larger chunks ----- */
#ifdef MSB_FIRST
	#define BYTE_XOR_BE(a)  	(a)
	#define BYTE_XOR_LE(a)  	((a) ^ 1)				/* read/write a byte to a 16-bit space */
	#define BYTE4_XOR_BE(a) 	(a)
	#define BYTE4_XOR_LE(a) 	((a) ^ 3)				/* read/write a byte to a 32-bit space */
	#define WORD_XOR_BE(a)  	(a)
	#define WORD_XOR_LE(a)  	((a) ^ 2)				/* read/write a word to a 32-bit space */
#else

	#define BYTE_XOR_BE(a)  	((a) ^ 1)				/* read/write a byte to a 16-bit space */
	#define BYTE_XOR_LE(a)  	(a)
	#define BYTE4_XOR_BE(a) 	((a) ^ 3)				/* read/write a byte to a 32-bit space */
	#define BYTE4_XOR_LE(a) 	(a)
	#define WORD_XOR_BE(a)  	((a) ^ 2)				/* read/write a word to a 32-bit space */
	#define WORD_XOR_LE(a)  	(a)
#endif
