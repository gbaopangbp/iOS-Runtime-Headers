/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray, <LibraryStacksViewDataSource>;

@interface PLStackRowCell : UITableViewCell {
    struct _NSRange { 
        NSUInteger location; 
        NSUInteger length; 
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    unsigned int _needsLayout : 1;
    unsigned int _showLabel : 1;
    NSMutableArray *_labels;
    } _stackInsets;
    } _stackRange;
    } _stackSize;
    NSMutableArray *_stackViews;
    <LibraryStacksViewDataSource> *_stacksDataSource;
}

@property <LibraryStacksViewDataSource> *stacksDataSource;
@property UIEdgeInsets stackInsets;
@property _NSRange stackRange;
@property CGSize stackSize;

+ (void)_initializeSafeCategory;

- (BOOL)_accessibilityAlwaysReturnsChild;
- (void)_addLabel:(id)arg1;
- (void)_addStackView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)_stackViewsNeedRelayout;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfStackInColumn:(NSUInteger)arg1;
- (id)initWithReuseIdentifier:(id)arg1 showLabel:(BOOL)arg2;
- (id)labels;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStackInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setStackRange:(struct _NSRange { NSUInteger x1; NSUInteger x2; })arg1;
- (void)setStackSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setStacksDataSource:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })stackInsets;
- (struct _NSRange { NSUInteger x1; NSUInteger x2; })stackRange;
- (struct CGSize { float x1; float x2; })stackSize;
- (id)stackViews;
- (id)stacksDataSource;

@end