/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSCEFormulaMap;

@interface TSCEFormulaMapEnumerator : NSObject {
    struct __hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > > >, void *> *> > { 
        struct __hash_iterator<std::__1::__hash_node<std::__1::pair<const __CFUUID *, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > > >, void *> *> { 
            struct __hash_node<std::__1::pair<const __CFUUID *, std::__1::vector<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> > > >, void *> {} *__node_; 
        } __i_; 
    struct __wrap_iter<std::__1::pair<TSUColumnRowCoordinate, TSCEFormula> *> { 
        struct pair<TSUColumnRowCoordinate, TSCEFormula> {} *__i; 
    TSCEFormulaMap *mFormulaMap;
    } mFormulasForAnOwnerIterator;
    } mOwnersToFormulasIterator;
}

- (id).cxx_construct;
- (void)dealloc;
- (bool)hasNext;
- (id)initWithFormulaMap:(id)arg1;
- (struct TSCEFormula { struct TSCEASTNodeArray {} *x1; struct TSCEFormulaTranslationFlags { unsigned int x_2_1_1 : 1; unsigned int x_2_1_2 : 1; } x2; })nextFormulaGettingOwner:(const struct __CFUUID {}**)arg1 cellCoordinate:(struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)arg2;

@end
