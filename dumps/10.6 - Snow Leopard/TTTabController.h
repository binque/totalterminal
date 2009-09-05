/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSplitViewDelegate-Protocol.h"

@class NSFont, NSObject<TTEventEncoder>, NSObject<TTOutputDecoder>, NSString, TTLogicalScreen, TTPane, TTProfile, TTShell, TTSplitView, TTTabViewItem;

@interface TTTabController : NSObject <NSSplitViewDelegate>
{
    TTTabViewItem *_tab;
    TTPane *activePane;
    TTSplitView *splitView;
    BOOL splitInProgress;
    BOOL joinInProgress;
    TTShell *_shell;
    TTLogicalScreen *_logicalScreen;
    NSObject<TTOutputDecoder> *_outputDecoder;
    NSObject<TTOutputDecoder> *_encodingConverter;
    NSObject<TTEventEncoder> *_eventEncoder;
    TTProfile *_profile;
    NSFont *_customFont;
    NSString *_customTitle;
    TTProfile *_scriptingProfile;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingRowCount;
+ (id)keyPathsForValuesAffectingColumnCount;
- (id)init;
- (id)initWithProfile:(id)arg1 columnCount:(long long)arg2 rowCount:(long long)arg3 command:(id)arg4 runAsShell:(BOOL)arg5;
- (void)setProfile:(id)arg1;
- (struct CGSize)inactiveContentSize;
- (struct CGSize)contentSize;
- (void)setGeometryToProfile:(id)arg1;
- (void)setGeometryToFrame:(struct CGRect)arg1;
- (void)sizeToFit:(struct CGRect)arg1;
@property unsigned long long rowCount;
@property unsigned long long columnCount;
- (BOOL)validateRowCount:(id *)arg1 error:(id *)arg2;
- (BOOL)validateColumnCount:(id *)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)detachPane:(id)arg1;
- (void)setTab:(id)arg1;
- (id)tabViewItem;
- (id)windowController;
- (BOOL)tabShouldClose;
- (void)closeSheetDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)splitPane:(id)arg1;
- (void)closePane:(id)arg1;
- (void)setActivePane:(id)arg1;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)splitViewDidResizeSubviews:(id)arg1;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)updateDirtyLinesFromLogicalScreen;
- (void)shellDidReceiveData:(id)arg1;
- (id)outputDecoder;
- (id)encodingConverter;
- (id)eventEncoder;
- (id)logicalScreen;
- (id)profile;
- (id)shell;
- (void)initViews;
- (void)updateTitle;
- (id)title;
- (id)tabTitle;
- (id)customFont;
- (void)setCustomFont:(id)arg1;
- (void)setCustomFontOverride:(id)arg1;
- (id)customTitle;
- (void)setCustomTitle:(id)arg1;
- (BOOL)needsClosePrompt;
- (void)reapShell:(BOOL)arg1;
- (void)writeDirectToScreen:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)emulatorDidDecodeData:(id)arg1;
@property(readonly) TTSplitView *splitView; // @synthesize splitView;
@property(readonly) TTPane *activePane; // @synthesize activePane;

@end
