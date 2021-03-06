#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Init(void *);
extern bool cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Shutdown(void *);
extern SteamAPICall_t cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CreateBrowser(void *, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_RemoveBrowser(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_LoadURL(void *, HHTMLBrowser, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetSize(void *, HHTMLBrowser, uint32, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopLoad(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Reload(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoBack(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GoForward(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AddHeader(void *, HHTMLBrowser, const char *, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ExecuteJavascript(void *, HHTMLBrowser, const char *);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseUp(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDown(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseDoubleClick(void *, HHTMLBrowser, EHTMLMouseButton);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseMove(void *, HHTMLBrowser, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_MouseWheel(void *, HHTMLBrowser, int32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyDown(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyUp(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_KeyChar(void *, HHTMLBrowser, uint32, EHTMLKeyModifiers);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetHorizontalScroll(void *, HHTMLBrowser, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetVerticalScroll(void *, HHTMLBrowser, uint32);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetKeyFocus(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_ViewSource(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_CopyToClipboard(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_PasteFromClipboard(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_Find(void *, HHTMLBrowser, const char *, bool, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_StopFind(void *, HHTMLBrowser);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_GetLinkAtPosition(void *, HHTMLBrowser, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetCookie(void *, const char *, const char *, const char *, const char *, RTime32, bool, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetPageScaleFactor(void *, HHTMLBrowser, float, int, int);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_SetBackgroundMode(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_AllowStartRequest(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_JSDialogResponse(void *, HHTMLBrowser, bool);
extern void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_003_FileLoadDialogResponse(void *, HHTMLBrowser, const char **);
#ifdef __cplusplus
}
#endif
