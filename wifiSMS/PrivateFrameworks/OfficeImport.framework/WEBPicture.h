/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class ESDRoot;



@interface WEBPicture : WDRun 
{

  /* Error parsing encoded ivar type info: ^{WrdPictureProperties=^^?^^?iiii^{WrdBorder}^{WrdBorder}^{WrdBorder}^{WrdBorder}{CsPoint<short int>="m_data"[2s]}{CsSize<short int>="m_data"[2s]}{CsSize<short int>="m_data"[2s]}i[4s]sS[2S]($_192="m_metafileBounds"[4s]"m_bitmapHeader"{$_193="m_bitsPerPixel"s})BBBB} */
    struct WrdPictureProperties { int (**x1)(); int (**x2)(); NSInteger x3; NSInteger x4; NSInteger x5; NSInteger x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct CsPoint<short int> { 
            short m_data[2]; 
        } x11; struct CsSize<short int> { 
            short m_data[2]; 
        } x12; struct CsSize<short int> { 
            short m_data[2]; 
        } x13; NSInteger x14; short x15[4]; short x16; unsigned short x17; unsigned short x18[2]; union $_192 { 
            short m_metafileBounds[4]; 
            struct $_193 { 
                short m_bitsPerPixel; 
            } m_bitmapHeader; 
        } x19; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x20; void*x21; void*x22; void*x23; } *mWrdPictureProperties;

    struct WrdCharacterProperties { int (**x1)(); int (**x2)(); struct WrdCharacterPropertiesOverridden { 
            unsigned int m_useParagraphStylesProperties : 1; 
            unsigned int m_bold : 1; 
            unsigned int m_italic : 1; 
            unsigned int m_revisionMarkDelete : 1; 
            unsigned int m_outline : 1; 
            unsigned int m_hidden : 1; 
            unsigned int m_revisionMark : 1; 
            unsigned int m_strikethrough : 1; 
            unsigned int m_shadow : 1; 
            unsigned int m_embossed : 1; 
            unsigned int m_engraved : 1; 
            unsigned int m_doubleStrikethrough : 1; 
            unsigned int m_fontSize : 1; 
            unsigned int m_fontIndexForASCIIText : 1; 
            unsigned int m_fontIndexForFarEastAsianText : 1; 
            unsigned int m_fontIndexForOtherText : 1; 
            unsigned int m_color : 1; 
            unsigned int m_color97 : 1; 
            unsigned int m_emphasisMark : 1; 
            unsigned int m_superSubscript : 1; 
            unsigned int m_underline : 1; 
            unsigned int m_characterPosition : 1; 
            unsigned int m_shading : 1; 
            unsigned int m_textAnimation : 1; 
            unsigned int m_fontSizeForASCIIText : 1; 
            unsigned int m_fontSizeForFarEastAsianText : 1; 
            unsigned int m_fontSizeForBiText : 1; 
            unsigned int m_styleIndex : 1; 
            unsigned int m_smallCaps : 1; 
            unsigned int m_caps : 1; 
            unsigned int m_specialCharacter : 1; 
            unsigned int m_embeddedObject : 1; 
            unsigned int m_lowercase : 1; 
            unsigned int m_data : 1; 
            unsigned int m_ole2 : 1; 
            unsigned int m_boldBi : 1; 
            unsigned int m_italicBi : 1; 
            unsigned int m_fieldVanish : 1; 
            unsigned int m_rightToLeft : 1; 
            unsigned int m_noProof : 1; 
            unsigned int m_hiddenInWebView : 1; 
            unsigned int m_fitText : 1; 
            unsigned int m_fontIndexForBiText : 1; 
            unsigned int m_spaceAfterEachChar : 1; 
            unsigned int m_characterScale : 1; 
            unsigned int m_languageIDForDefaultText : 1; 
            unsigned int m_languageIDForFarEastAsianText : 1; 
            unsigned int m_languageIDForBiText : 1; 
            unsigned int m_undetermined : 1; 
            unsigned int m_characterTypeIDHint : 1; 
            unsigned int m_hyphenationRule : 1; 
            unsigned int m_hyphenationChangeCharacter : 1; 
            unsigned int m_kerning : 1; 
            unsigned int m_underlineColor : 1; 
            unsigned int m_border : 1; 
            unsigned int m_indexToAuthorIDOfRevisionEdit : 1; 
            unsigned int m_tatenakayoko : 1; 
            unsigned int m_tatenakayokoNewLineState : 1; 
            unsigned int m_tatenakayokoID : 1; 
            unsigned int m_warichu : 1; 
            unsigned int m_kumimoji : 1; 
            unsigned int m_ruby : 1; 
            unsigned int m_fitTextFE : 1; 
            unsigned int m_warichuBracket : 1; 
            unsigned int m_warichuNoOpenBrackets : 1; 
            unsigned int m_fitTextInLine : 1; 
            unsigned int m_fetchTextMetrics : 1; 
            unsigned int m_fitTextInCell : 1; 
            unsigned int m_fontIndexForSymbol : 1; 
            unsigned int m_symbolCharacter : 1; 
            unsigned int m_offsetToPictureData : 1; 
            unsigned int m_offsetToFormFieldData : 1; 
            unsigned int m_offsetToOLE1Object : 1; 
            unsigned int m_objectIDForOLE2 : 1; 
            unsigned int m_locationOfPictureData : 1; 
            unsigned int m_charPositionOfPictureBulletInBookmark : 1; 
            unsigned int m_hyphenationRuleOld : 1; 
            unsigned int m_hyphenationChangeCharacterOld : 1; 
            unsigned int m_indexToAuthorIDOfRevisionDelete : 1; 
            unsigned int m_indexToStringsForReasons : 1; 
            unsigned int m_indexToStringsForReasonsOfDeletion : 1; 
            unsigned int m_codePageForPreUnicodeFiles : 1; 
            unsigned int m_listCharacterPictureBullet : 1; 
            unsigned int m_highlightColor97 : 1; 
            unsigned int m_highlighted : 1; 
            unsigned int m_charSetDifferent : 1; 
            unsigned int m_macCharSet : 1; 
            unsigned int m_revisionProperties : 1; 
            unsigned int m_indexToAuthorIDOfRevisionProperties : 1; 
            unsigned int m_revisionPropertiesDateTime : 1; 
            unsigned int m_conflictOriginal : 1; 
            unsigned int m_conflictOtherDelete : 1; 
            unsigned int m_indexToConflictText : 1; 
            unsigned int m_indexToAuthorIDOfConflict : 1; 
            unsigned int m_conflictDateTime : 1; 
            unsigned int m_revisionListNumber : 1; 
            unsigned int m_indexToAuthorIDOfRevisionListNumber : 1; 
            unsigned int m_revisionListNumberDateTime : 1; 
            unsigned int m_listNumberString : 1; 
            unsigned int m_offsetToOLEObjectData : 1; 
            unsigned int m_fitTextWidth : 1; 
            unsigned int m_revisionEdit : 1; 
            unsigned int m_revisionDelete : 1; 
            unsigned int m_fitTextID : 1; 
            unsigned int m_lineBreak : 1; 
            unsigned int m_farEastLayoutID : 1; 
            unsigned int m_usePageSetupLinePitch : 1; 
            unsigned int m_xmlTag : 1; 
        } x3; struct CsColour { 
            unsigned short m_alpha; 
            unsigned short m_r; 
            unsigned short m_g; 
            unsigned short m_b; 
        } x4; struct CsColour { 
            unsigned short m_alpha; 
            unsigned short m_r; 
            unsigned short m_g; 
            unsigned short m_b; 
        } x5; struct CsString { 
            int (**_vptr$CsString)(); 
            unsigned short *m_pBuffer; 
            NSUInteger m_ulCount; 
            NSUInteger m_ulSize; 
        } x6; struct WrdShading {} *x7; struct WrdBorder {} *x8; struct WrdDateTime {} *x9; struct WrdDateTime {} *x10; struct WrdDateTime {} *x11; struct WrdDateTime {} *x12; struct WrdDateTime {} *x13; NSInteger x14; NSInteger x15; NSInteger x16; NSInteger x17; NSInteger x18; NSInteger x19; NSInteger x20; NSInteger x21; NSInteger x22; NSInteger x23; NSInteger x24; NSInteger x25; NSInteger x26; NSInteger x27; NSInteger x28; NSInteger x29; NSInteger x30; NSInteger x31; NSInteger x32; NSInteger x33; NSInteger x34; NSInteger x35; NSInteger x36; NSInteger x37; NSInteger x38; NSInteger x39; NSInteger x40; NSInteger x41; NSInteger x42; NSInteger x43; unsigned short x44; unsigned short x45; unsigned short x46; unsigned short x47; unsigned short x48; NSInteger x49; NSInteger x50; unsigned short x51; NSInteger x52; NSInteger x53; NSInteger x54; NSInteger x55; NSInteger x56; NSInteger x57; NSInteger x58; NSInteger x59; NSUInteger x60; unsigned short x61; unsigned short x62; unsigned short x63; unsigned short x64; unsigned short x65; unsigned short x66; unsigned short x67; unsigned short x68; unsigned short x69; unsigned short x70; unsigned short x71; unsigned short x72; unsigned short x73; unsigned short x74; unsigned short x75; unsigned short x76; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; short x106; unsigned char x107; unsigned char x108; unsigned char x109; unsigned char x110; unsigned char x111; } *mWrdCharacterProperties;
    ESDRoot *mGlobalsRoot;
    ESDRoot *mBlobRoot;
}


- (id)initWithParagraph:(id)arg1;
- (void)dealloc;
- (struct WrdPictureProperties { int (**x1)(); int (**x2)(); NSInteger x3; NSInteger x4; NSInteger x5; NSInteger x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct CsPoint<short int> { short x_11_1_1[2]; } x11; struct CsSize<short int> { short x_12_1_1[2]; } x12; struct CsSize<short int> { short x_13_1_1[2]; } x13; NSInteger x14; short x15[4]; short x16; unsigned short x17; unsigned short x18[2]; union $_192 { short x_19_1_1[4]; struct $_193 { short x_2_2_1; } x_19_1_2; } x19; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x20; void*x21; void*x22; void*x23; }*)pictureProperties;
     /* Encoded args for previous method: ^{WrdPictureProperties=^^?^^?iiii^{WrdBorder}^{WrdBorder}^{WrdBorder}^{WrdBorder}{CsPoint<short int>=[2s]}{CsSize<short int>=[2s]}{CsSize<short int>=[2s]}i[4s]sS[2S]($_192=[4s]{$_193=s})BBBB}8@0:4 */

- (struct WrdCharacterProperties { int (**x1)(); int (**x2)(); struct WrdCharacterPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; unsigned int x_3_1_40 : 1; unsigned int x_3_1_41 : 1; unsigned int x_3_1_42 : 1; unsigned int x_3_1_43 : 1; unsigned int x_3_1_44 : 1; unsigned int x_3_1_45 : 1; unsigned int x_3_1_46 : 1; unsigned int x_3_1_47 : 1; unsigned int x_3_1_48 : 1; unsigned int x_3_1_49 : 1; unsigned int x_3_1_50 : 1; unsigned int x_3_1_51 : 1; unsigned int x_3_1_52 : 1; unsigned int x_3_1_53 : 1; unsigned int x_3_1_54 : 1; unsigned int x_3_1_55 : 1; unsigned int x_3_1_56 : 1; unsigned int x_3_1_57 : 1; unsigned int x_3_1_58 : 1; unsigned int x_3_1_59 : 1; unsigned int x_3_1_60 : 1; unsigned int x_3_1_61 : 1; unsigned int x_3_1_62 : 1; unsigned int x_3_1_63 : 1; unsigned int x_3_1_64 : 1; unsigned int x_3_1_65 : 1; unsigned int x_3_1_66 : 1; unsigned int x_3_1_67 : 1; unsigned int x_3_1_68 : 1; unsigned int x_3_1_69 : 1; unsigned int x_3_1_70 : 1; unsigned int x_3_1_71 : 1; unsigned int x_3_1_72 : 1; unsigned int x_3_1_73 : 1; unsigned int x_3_1_74 : 1; unsigned int x_3_1_75 : 1; unsigned int x_3_1_76 : 1; unsigned int x_3_1_77 : 1; unsigned int x_3_1_78 : 1; unsigned int x_3_1_79 : 1; unsigned int x_3_1_80 : 1; unsigned int x_3_1_81 : 1; unsigned int x_3_1_82 : 1; unsigned int x_3_1_83 : 1; unsigned int x_3_1_84 : 1; unsigned int x_3_1_85 : 1; unsigned int x_3_1_86 : 1; unsigned int x_3_1_87 : 1; unsigned int x_3_1_88 : 1; unsigned int x_3_1_89 : 1; unsigned int x_3_1_90 : 1; unsigned int x_3_1_91 : 1; unsigned int x_3_1_92 : 1; unsigned int x_3_1_93 : 1; unsigned int x_3_1_94 : 1; unsigned int x_3_1_95 : 1; unsigned int x_3_1_96 : 1; unsigned int x_3_1_97 : 1; unsigned int x_3_1_98 : 1; unsigned int x_3_1_99 : 1; unsigned int x_3_1_100 : 1; unsigned int x_3_1_101 : 1; unsigned int x_3_1_102 : 1; unsigned int x_3_1_103 : 1; unsigned int x_3_1_104 : 1; unsigned int x_3_1_105 : 1; unsigned int x_3_1_106 : 1; unsigned int x_3_1_107 : 1; unsigned int x_3_1_108 : 1; } x3; struct CsColour { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned short x_4_1_4; } x4; struct CsColour { unsigned short x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned short x_5_1_4; } x5; struct CsString { int (**x_6_1_1)(); unsigned short *x_6_1_2; NSUInteger x_6_1_3; NSUInteger x_6_1_4; } x6; struct WrdShading {} *x7; struct WrdBorder {} *x8; struct WrdDateTime {} *x9; struct WrdDateTime {} *x10; struct WrdDateTime {} *x11; struct WrdDateTime {} *x12; struct WrdDateTime {} *x13; NSInteger x14; NSInteger x15; NSInteger x16; NSInteger x17; NSInteger x18; NSInteger x19; NSInteger x20; NSInteger x21; NSInteger x22; NSInteger x23; NSInteger x24; NSInteger x25; NSInteger x26; NSInteger x27; NSInteger x28; NSInteger x29; NSInteger x30; NSInteger x31; NSInteger x32; NSInteger x33; NSInteger x34; NSInteger x35; NSInteger x36; NSInteger x37; NSInteger x38; NSInteger x39; NSInteger x40; NSInteger x41; NSInteger x42; NSInteger x43; unsigned short x44; unsigned short x45; unsigned short x46; unsigned short x47; unsigned short x48; NSInteger x49; NSInteger x50; unsigned short x51; NSInteger x52; NSInteger x53; NSInteger x54; NSInteger x55; NSInteger x56; NSInteger x57; NSInteger x58; NSInteger x59; NSUInteger x60; unsigned short x61; unsigned short x62; unsigned short x63; unsigned short x64; unsigned short x65; unsigned short x66; unsigned short x67; unsigned short x68; unsigned short x69; unsigned short x70; unsigned short x71; unsigned short x72; unsigned short x73; unsigned short x74; unsigned short x75; unsigned short x76; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned int x86 : 1; unsigned int x87 : 1; unsigned int x88 : 1; unsigned int x89 : 1; unsigned int x90 : 1; unsigned int x91 : 1; unsigned int x92 : 1; unsigned int x93 : 1; unsigned int x94 : 1; unsigned int x95 : 1; unsigned int x96 : 1; unsigned int x97 : 1; unsigned int x98 : 1; unsigned int x99 : 1; unsigned int x100 : 1; unsigned int x101 : 1; unsigned int x102 : 1; unsigned int x103 : 1; unsigned int x104 : 1; unsigned int x105 : 1; short x106; unsigned char x107; unsigned char x108; unsigned char x109; unsigned char x110; unsigned char x111; }*)characterProperties;
- (id)globalsRoot;
- (id)blobRoot;
- (NSInteger)runType;

@end
