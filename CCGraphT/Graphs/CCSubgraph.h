//
//  CCSubgraph.h
//  CCGraphT
//
//  Created by James Kane on 11/10/12.
//  Copyright (c) 2012 James Kane. All rights reserved.
//

#import "CCAbstractGraph.h"

@class CCAbstractBaseGraph;

@interface CCSubgraph : CCAbstractGraph
@property (strong, nonatomic) NSMutableArray *edgeArray;
@property (strong, nonatomic) NSMutableArray *vertexArray;

- (id)initWithGraph:(CCAbstractBaseGraph *)base usingVertexSubset:(NSArray *)vertexArray andEdgeSubset:(NSArray *)edgeSubset;
- (id)initWithGraph:(CCAbstractBaseGraph *)base usingVertexSubset:(NSArray *)vertexArray;

@end
