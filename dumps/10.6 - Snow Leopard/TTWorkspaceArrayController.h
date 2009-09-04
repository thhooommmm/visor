/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSArrayController.h"

#import "NSOpenSavePanelDelegate-Protocol.h"

@class NSTableView;

@interface TTWorkspaceArrayController : NSArrayController <NSOpenSavePanelDelegate>
{
    NSTableView *_tableView;
}

- (void)awakeFromNib;
- (void)willChangeValuesForArrangedKeys:(BOOL)arg1 objectKeys:(BOOL)arg2 indexKeys:(BOOL)arg3;
- (void)didChangeValuesForArrangedKeys:(BOOL)arg1 objectKeys:(BOOL)arg2 indexKeys:(BOOL)arg3;
- (BOOL)canExport;
- (void)export:(id)arg1;
- (void)exportPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)import:(id)arg1;
- (void)importPanelDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)panel:(id)arg1 shouldShowFilename:(id)arg2;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)tableView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forDraggedRowsWithIndexes:(id)arg3;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;

@end

