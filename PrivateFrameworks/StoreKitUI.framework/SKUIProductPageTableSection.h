/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <StoreKitUI/SKUITableViewSection.h>

@interface SKUIProductPageTableSection : SKUITableViewSection
{
    BOOL _expanded;
}

@property(nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
- (id)textBoxTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (float)heightForTextLayout:(id)arg1 isExpanded:(BOOL)arg2;

@end

