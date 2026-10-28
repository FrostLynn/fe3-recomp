#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D9D8F8
// Address: 0x1d9d8f8 - 0x1d9d968
void sub_01D9D8F8_0x1d9d8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D8F8_0x1d9d8f8");
#endif

    switch (ctx->pc) {
        case 0x1d9d91cu: goto label_1d9d91c;
        case 0x1d9d92cu: goto label_1d9d92c;
        case 0x1d9d938u: goto label_1d9d938;
        case 0x1d9d948u: goto label_1d9d948;
        default: break;
    }

    ctx->pc = 0x1d9d8f8u;

    // 0x1d9d8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9d8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9d8fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9d8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9d900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9d900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9d904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9d908: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d9d908u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d90c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d9d90cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9d910: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9d910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d914: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D914u;
    SET_GPR_U32(ctx, 31, 0x1D9D91Cu);
    ctx->pc = 0x1D9D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D914u;
    // 0x1d9d918: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D914u, 0x1D9D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D91Cu;
label_1d9d91c:
    // 0x1d9d91c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d9d91cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d9d920: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d9d920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d9d924: 0xc767504  jal         func_1D9D410
    ctx->pc = 0x1D9D924u;
    SET_GPR_U32(ctx, 31, 0x1D9D92Cu);
    ctx->pc = 0x1D9D928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D924u;
    // 0x1d9d928: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D410u, 0x1D9D924u, 0x1D9D92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D92Cu;
label_1d9d92c:
    // 0x1d9d92c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9d92cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9d930: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D930u;
    SET_GPR_U32(ctx, 31, 0x1D9D938u);
    ctx->pc = 0x1D9D934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D930u;
    // 0x1d9d934: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D930u, 0x1D9D938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D938u;
label_1d9d938:
    // 0x1d9d938: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d9d938u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d9d93c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d9d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d9d940: 0xc767504  jal         func_1D9D410
    ctx->pc = 0x1D9D940u;
    SET_GPR_U32(ctx, 31, 0x1D9D948u);
    ctx->pc = 0x1D9D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D940u;
    // 0x1d9d944: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9D410u, 0x1D9D940u, 0x1D9D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D948u;
label_1d9d948:
    // 0x1d9d948: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d9d948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d9d94c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d950: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d9d950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d954: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9d954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9d958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d95c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9d95cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d960: 0x876726a  j           func_1D9C9A8
    ctx->pc = 0x1D9D960u;
    ctx->pc = 0x1D9D964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D960u;
    // 0x1d9d964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C9A8u;
    sub_01D9C9A8_0x1d9c9a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9D968u;
}
