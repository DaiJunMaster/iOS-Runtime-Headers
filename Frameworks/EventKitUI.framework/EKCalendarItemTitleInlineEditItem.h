/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIResponder, UITableViewCell;

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate> {
    unsigned int _showsLocation : 1;
    UITableViewCell *_locationCell;
    UIResponder *_selectedTextField;
    UITableViewCell *_titleCell;
}

@property(retain) UIResponder * selectedResponder;

- (id)_makeCell:(int)arg1;
- (void)addStylingToCell:(id)arg1 forSubitemAtIndex:(int)arg2;
- (id)cellForSubitemAtIndex:(int)arg1;
- (void)dealloc;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)init;
- (id)initWithLocation:(BOOL)arg1;
- (BOOL)isInline;
- (int)numberOfSubitems;
- (void)reset;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (id)selectedResponder;
- (id)selectedTextField;
- (void)setSelectedResponder:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;

@end