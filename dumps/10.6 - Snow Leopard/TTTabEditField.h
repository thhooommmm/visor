/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSTextField.h"

@class TTTabView, TTTabViewItem;

@interface TTTabEditField : NSTextField
{
    TTTabView *tabView;
    TTTabViewItem *tabItem;
}

- (void)dealloc;
- (void)textDidEndEditing:(id)arg1;
@property(retain) TTTabViewItem *tabItem; // @synthesize tabItem;
@property(retain) TTTabView *tabView; // @synthesize tabView;

@end

