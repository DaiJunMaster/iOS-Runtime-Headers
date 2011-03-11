/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKCellBackgroundView, NSArray;

@interface GKMultiColumnTableViewCell : GKTableViewCell  {
    unsigned int _columnCount;
    NSArray *_contentsArray;
    int _selectedColumn;
    float _columnSeparatorWidth;
    SEL _columnCountSetter;
    SEL _selectedColumnSetter;
    BOOL _multiCellEnabled;
}

@property(readonly) GKCellBackgroundView * cellBackgroundView;
@property(readonly) GKCellBackgroundView * selectedCellBackgroundView;
@property BOOL multiCellEnabled;
@property SEL selectedColumnSetter;
@property SEL columnCountSetter;
@property(copy) NSArray * contentsArray;
@property float columnSeparatorWidth;
@property int selectedColumn;
@property unsigned int columnCount;


- (void)configureBackgroundView;
- (void)setMultiCellEnabled:(BOOL)arg1;
- (id)cellBackgroundView;
- (id)selectedCellBackgroundView;
- (BOOL)multiCellEnabled;
- (SEL)selectedColumnSetter;
- (void)setSelectedColumnSetter:(SEL)arg1;
- (SEL)columnCountSetter;
- (void)setColumnCountSetter:(SEL)arg1;
- (void)setSelectedColumn:(int)arg1 animated:(BOOL)arg2;
- (void)setContentsArray:(id)arg1;
- (id)contentsArray;
- (void)setSelectedColumn:(int)arg1;
- (float)columnSeparatorWidth;
- (void)setColumnSeparatorWidth:(float)arg1;
- (void)updateBackgroundViews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 tableViewStyle:(int)arg3 backgroundStyle:(int)arg4;
- (int)selectedColumn;
- (unsigned int)columnCount;
- (void)setColumnCount:(unsigned int)arg1;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end