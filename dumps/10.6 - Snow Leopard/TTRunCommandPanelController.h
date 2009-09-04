/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSWindowController.h"

#import "NSWindowDelegate-Protocol.h"

@class NSButton, NSComboBox;

@interface TTRunCommandPanelController : NSWindowController <NSWindowDelegate>
{
    NSComboBox *_commandCombo;
    NSButton *_runInShellCheckBox;
}

+ (id)sharedRunCommandPanel;
- (id)initWithWindowNibName:(id)arg1;
- (void)windowDidLoad;
- (void)showWindow:(id)arg1;
- (void)dealloc;
- (void)commandEntered:(id)arg1;

@end

