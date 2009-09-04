/*
 *     Generated by class-dump 3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface TTIOManager : NSObject
{
    NSLock *_readLock;
    NSLock *_writeLock;
    NSLock *_deadLock;
    NSLock *_signalLock;
    int _signalPipe[2];
    NSMutableDictionary *_readQueue;
    NSMutableDictionary *_writeQueue;
    NSMutableDictionary *_shells;
    NSMutableDictionary *_deadShells;
    struct fd_set _readDescriptors;
    struct fd_set _writeDescriptors;
    BOOL _didRunMainThread;
}

+ (id)sharedIOManager;
- (id)init;
- (void)dealloc;
- (void)addShell:(id)arg1;
- (void)removeShell:(id)arg1;
- (void)signalShell:(id)arg1;
- (void)writeData:(id)arg1 forShell:(id)arg2;
- (void)signalIOThread;
- (void)IOThread;
- (void)mainThread;

@end

