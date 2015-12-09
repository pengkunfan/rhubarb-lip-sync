#ifndef LIPSYNC_PHONE_H
#define LIPSYNC_PHONE_H

// Defines a subset of the Arpabet
enum class Phone {
	None,
	Unknown,

	/////////
	// Vowels

	// ... monophthongs
	AO,		// [ɔ] as in [o]ff, f[a]ll, fr[o]st
	AA,		// [ɑ] as in f[a]ther
	IY,		// [i] as in b[ee], sh[e]
	UW,		// [u] as in y[ou], n[ew], f[oo]d
	EH,		// [ɛ] as in r[e]d, m[e]n
	IH,		// [ɪ] as in b[i]g, w[i]n
	UH,		// [ʊ] as in sh[ou]ld, c[ou]ld
	AH,		// [ʌ, ə] as in b[u]t, s[u]n, [a]lone, disc[u]s
	AE,		// [æ] as in [a]t, b[a]t

	// ... diphthongs
	EY,		// [eɪ] as in s[ay], [ei]ght
	AY,		// [aɪ] as in m[y], wh[y], r[i]de
	OW,		// [oʊ] as in sh[ow], c[oa]t
	AW,		// [aʊ] as in h[ow], n[ow]
	OY,		// [ɔɪ] as in b[oy], t[oy]

	// ... r-colored
	ER,		// [ɝ] as in h[er], b[ir]d, h[ur]t

	/////////////
	// Consonants

	// ... stops
	P,		// [p] as in [p]ay
	B,		// [b] as in [b]uy
	T,		// [t] as in [t]ake
	D,		// [d] as in [d]ay
	K,		// [k] as in [k]ey
	G,		// [g] as in [g]o

	// ... affricates
	CH,		// [tʃ] as in [ch]air
	JH,		// [dʒ] as in [j]ust

	// ... fricatives
	F,		// [f] as in [f]or
	V,		// [v] as in [v]ery
	TH,		// [θ] as in [th]anks
	DH,		// [ð] as in [th]at
	S,		// [s] as in [s]ay
	Z,		// [z] as in [z]oo
	SH,		// [ʃ] as in [sh]ow
	ZH,		// [ʒ] as in mea[s]ure, plea[s]ure
	HH,		// [h] as in [h]ouse

	// ... nasals
	M,		// [m] as in [m]an
	N,		// [n] as in [no]
	NG,		// [ŋ] as in si[ng]

	// ... liquids
	L,		// [ɫ] as in [l]ate
	R,		// [r, ɹ] as in [r]un

	// ... semivowels
	Y,		// [j] as in [y]es
	W		// [w] as in [w]ay
};

Phone stringToPhone(const std::string& s);

std::string phoneToString(Phone phone);

std::ostream& operator <<(std::ostream& stream, const Phone phone);

#endif //LIPSYNC_PHONE_H