/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <TSKCommandHistoryDelegate>, NSMutableArray, TSKCommand<TSKPreflightCommand>;

@interface TSKCommandHistory : TSPObject {
    NSMutableArray *_commands;
    <TSKCommandHistoryDelegate> *_delegate;
    unsigned long long _mark;
    NSMutableArray *_markedRedoCommands;
    TSKCommand<TSKPreflightCommand> *_pendingPreflightCommand;
    unsigned long long _removedCommandCountSinceLastSave;
    unsigned long long _removedCommandCountSinceUnarchive;
    unsigned long long _undoCount;
    unsigned long long _undoCountAtLastSave;
    unsigned long long _undoCountAtUnarchive;
    bool_documentEditedSinceLastSave;
}

@property <TSKCommandHistoryDelegate> * delegate;
@property(retain) TSKCommand<TSKPreflightCommand> * pendingPreflightCommand;

- (void)acceptMarkedCommands;
- (void)addCommand:(id)arg1;
- (void)beginMark;
- (bool)canCoalesceWithCommand:(id)arg1;
- (void)clear;
- (void)coalesceWithCommand:(id)arg1;
- (id)commandsRemovedByAcceptingMarkedCommands;
- (id)commandsRemovedByAddingCommand;
- (void)dealloc;
- (id)delegate;
- (void)documentWasSaved;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (bool)isDocumentEditedSinceLastSave;
- (id)lastCommand;
- (void)p_endMark:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_rangeOfCommandsOverMaxUndoDepthAfterAddingCommandsWithCount:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })p_rangeOfRedoCommands;
- (void)p_removeCommandsOverMaxUndoDepthAfterAddingCommandsWithCount:(unsigned long long)arg1;
- (id)packageLocator;
- (id)pendingPreflightCommand;
- (id)popRedo;
- (id)popUndo;
- (id)redoActionString;
- (unsigned long long)redoCount;
- (id)rejectMarkedCommands;
- (void)replaceLastCommandWithCommand:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPendingPreflightCommand:(id)arg1;
- (id)undoActionString;
- (unsigned long long)undoCount;

@end
