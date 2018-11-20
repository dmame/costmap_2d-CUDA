#include <costmap_2d/static_layer.h>

#ifndef CUDA_STATIC_LAYER_H
#define CUDA_STATIC_LAYER_H
namespace costmap_2d
{
    namespace cuda
    {
        void updateWithTrueOverwrite(costmap_2d::Costmap2D& master_grid, int min_i, int min_j, int max_i, int max_j, unsigned char *costmap_);
        void updateWithMax(costmap_2d::Costmap2D& master_grid, int min_i, int min_j, int max_i, int max_j, unsigned char *costmap_);
        namespace static_layer
        {
            void rollingUpdateCosts(costmap_2d::Costmap2D& master_grid, tf::StampedTransform tf, costmap_2d::Costmap2D *costmap, bool use_maximum, int min_i, int min_j, int max_i, int max_j);
        }
    }
}
#endif
