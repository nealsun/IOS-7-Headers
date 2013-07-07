/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptSection;

@interface SUScriptSectionsController : SUScriptObject
{
}

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)_setSelectedIdentifier:(id)arg1;
- (id)_fixedSelectedIdentifier;
- (id)_copySectionWithIdentifier:(id)arg1;
- (void)_tabBarConfigurationChangedNotification:(id)arg1;
- (void)setRootViewController:(id)arg1 forSection:(id)arg2;
@property(retain) SUScriptSection *selectedSection;
@property(readonly) id sections;
- (id)_className;
- (id)sectionWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

@end

