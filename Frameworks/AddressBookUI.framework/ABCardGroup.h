/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class CNContact, NSArray, NSMutableArray, NSString;

@interface ABCardGroup : NSObject <NSCopying>
{
    NSMutableArray *_items;
    NSMutableArray *_actions;
    NSArray *_actionItems;
    BOOL _useSplitActions;
    BOOL _addSpacerFromPreviousGroup;
    CNContact *_contact;
    NSString *_title;
}

+ (id)groupForContact:(id)arg1;
@property(nonatomic) BOOL addSpacerFromPreviousGroup; // @synthesize addSpacerFromPreviousGroup=_addSpacerFromPreviousGroup;
@property(nonatomic) BOOL useSplitActions; // @synthesize useSplitActions=_useSplitActions;
@property(readonly, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)_loadActionItems;
- (id)description;
- (void)removeActionWithTitle:(id)arg1;
- (void)removeActionWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4;
- (void)addAction:(id)arg1 withTitle:(id)arg2;
@property(readonly, nonatomic) NSArray *actionItems;
@property(readonly, nonatomic) NSArray *editingItems;
@property(readonly, nonatomic) NSArray *displayItems;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContact:(id)arg1;

@end

