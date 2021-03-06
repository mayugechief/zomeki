/* Copyright (c) 2000-2006                  */
/*   Yamashita Lab., Ritsumeikan University */
/*   All rights reserved                    */
/*                                          */
/* $Id: pronunciation_sjis.h,v 1.3 2006/10/19 03:27:08 sako Exp $                                     */

/* 仮名表記と音素の対応 */

struct {
	char *kana;
	char *phonemes;
} prnTable[] = {
	{ "ア", "a" },
	{ "イ", "i" },
	{ "ウ", "u" },
	{ "エ", "e" },
	{ "オ", "o" },
	{ "カ", "k a" },
	{ "キ", "k i" },
	{ "ク", "k u" },
	{ "ケ", "k e" },
	{ "コ", "k o" },
	{ "サ", "s a" },
	{ "シ", "sh i" },
	{ "ス", "s u" },
	{ "セ", "s e" },
	{ "ソ", "s o" },
	{ "タ", "t a" },
	{ "チ", "ch i" },
	{ "ツ", "ts u" },
	{ "テ", "t e" },
	{ "ト", "t o" },
	{ "ナ", "n a" },
	{ "ニ", "n i" },
	{ "ヌ", "n u" },
	{ "ネ", "n e" },
	{ "ノ", "n o" },
	{ "ハ", "h a" },
	{ "ヒ", "h i" },
	{ "フ", "f u" },
	{ "ヘ", "h e" },
	{ "ホ", "h o" },
	{ "マ", "m a" },
	{ "ミ", "m i" },
	{ "ム", "m u" },
	{ "メ", "m e" },
	{ "モ", "m o" },
	{ "ヤ", "y a" },
	{ "ユ", "y u" },
	{ "ヨ", "y o" },
	{ "ラ", "r a" },
	{ "リ", "r i" },
	{ "ル", "r u" },
	{ "レ", "r e" },
	{ "ロ", "r o" },
	{ "ワ", "w a" },
	{ "ヲ", "o" },
	{ "ン", "N" },

	{ "ガ", "g a" },
	{ "ギ", "g i" },
	{ "グ", "g u" },
	{ "ゲ", "g e" },
	{ "ゴ", "g o" },
	{ "ザ", "z a" },
	{ "ジ", "j i" },
	{ "ズ", "z u" },
	{ "ゼ", "z e" },
	{ "ゾ", "z o" },
	{ "ダ", "d a" },
	{ "ヂ", "j i" },
	{ "ヅ", "z u" },
	{ "デ", "d e" },
	{ "ド", "d o" },
	{ "バ", "b a" },
	{ "ビ", "b i" },
	{ "ブ", "b u" },
	{ "ベ", "b e" },
	{ "ボ", "b o" },
	{ "パ", "p a" },
	{ "ピ", "p i" },
	{ "プ", "p u" },
	{ "ペ", "p e" },
	{ "ポ", "p o" },

	{ "キャ", "ky a" },
	{ "キュ", "ky u" },
	{ "キェ", "ky e" },
	{ "キョ", "ky o" },
	{ "ギャ", "gy a" },
	{ "ギュ", "gy u" },
	{ "ギェ", "gy e" },
	{ "ギョ", "gy o" },
	{ "シャ", "sh a" },
	{ "シュ", "sh u" },
	{ "シェ", "sh e" },
	{ "ショ", "sh o" },
	{ "ジャ", "j a" },
	{ "ジュ", "j u" },
	{ "ジェ", "j e" },
	{ "ジョ", "j o" },
	{ "チャ", "ch a" },
	{ "チュ", "ch u" },
	{ "チェ", "ch e" },
	{ "チョ", "ch o" },
	{ "ヂャ", "j a" },
	{ "ヂュ", "j u" },
	{ "ヂェ", "j e" },
	{ "ヂョ", "j o" },
	{ "ニャ", "ny a" },
	{ "ニュ", "ny u" },
	{ "ニェ", "ny e" },
	{ "ニョ", "ny o" },
	{ "ヒャ", "hy a" },
	{ "ヒュ", "hy u" },
	{ "ヒェ", "hy e" },
	{ "ヒョ", "hy o" },
	{ "ビャ", "by a" },
	{ "ビュ", "by u" },
	{ "ビェ", "by e" },
	{ "ビョ", "by o" },
	{ "ピャ", "py a" },
	{ "ピュ", "py u" },
	{ "ピェ", "py e" },
	{ "ピョ", "py o" },
	{ "ミャ", "my a" },
	{ "ミュ", "my u" },
	{ "ミェ", "my e" },
	{ "ミョ", "my o" },
	{ "リャ", "ry a" },
	{ "リュ", "ry u" },
	{ "リェ", "ry e" },
	{ "リョ", "ry o" },

	{ "ファ", "f a" },
	{ "フィ", "f i" },
	{ "フェ", "f e" },
	{ "フォ", "f o" },
	{ "ヴァ", "b a" },
	{ "ヴィ", "b i" },
	{ "ヴ",   "b u" },
	{ "ヴェ", "b e" },
	{ "ヴォ", "b o" },

	{ "ウァ", "w a" },
	{ "ウィ", "w i" },
	{ "ウェ", "w e" },
	{ "ウォ", "w o" },
	{ "ティ", "t i" },
	{ "トゥ", "t u" },
	{ "ディ", "d i" },
	{ "ドゥ", "d u" },
	{ "デュ", "dy u" },
	{ "ツァ", "ts a" },
	{ "ツィ", "ts i" },
	{ "ツェ", "ts e" },
	{ "ツォ", "ts o" },

	{ "ッ", "cl" },

	{ "ァ", "a" },
	{ "ィ", "i" },
	{ "ゥ", "u" },
	{ "ェ", "e" },
	{ "ォ", "o" },
	{ "ャ", "y a" },
	{ "ュ", "y u" },
	{ "ョ", "y o" },

	{ "？", "pau" },
	{ "、", "pau" },
	{ "。", "pau" }
};
