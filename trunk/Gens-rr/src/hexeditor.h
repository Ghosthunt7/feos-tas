#ifndef HEXEDITOR_H
#define HEXEDITOR_H

extern HWND HexEditorHWnd;
extern void DoHexEditor();
extern void UpdateHexEditor();

typedef struct {
	bool FontBold;
	unsigned int
		FontHeight, FontWidth, FontWeight,
		GapFontX, GapFontY, GapHeaderX, GapHeaderY,
		CellHeight, CellWidth,
		DialogPosX, DialogPosY,
		OffsetVisibleFirst, OffsetVisibleTotal,
		AddressSelectedFirst, AddressSelectedTotal,
		MemoryRegion;
	COLORREF
		ColorFont, ColorBG, ColorSelection;
} HexParameters;

extern HexParameters Hex;

#endif