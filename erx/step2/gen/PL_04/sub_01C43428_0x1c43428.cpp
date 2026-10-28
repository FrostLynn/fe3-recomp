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

// Function: sub_01C43428
// Address: 0x1c43428 - 0x1c43498
void sub_01C43428_0x1c43428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C43428_0x1c43428");
#endif

    switch (ctx->pc) {
        case 0x1c4344cu: goto label_1c4344c;
        case 0x1c4345cu: goto label_1c4345c;
        case 0x1c43468u: goto label_1c43468;
        case 0x1c43478u: goto label_1c43478;
        default: break;
    }

    ctx->pc = 0x1c43428u;

    // 0x1c43428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c43428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4342c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c43430: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c43430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c43434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c43434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c43438: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c43438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4343c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c4343cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c43440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c43440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43444: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C43444u;
    SET_GPR_U32(ctx, 31, 0x1C4344Cu);
    ctx->pc = 0x1C43448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43444u;
    // 0x1c43448: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C43444u, 0x1C4344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4344Cu;
label_1c4344c:
    // 0x1c4344c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c4344cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c43450: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c43450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c43454: 0xc710bd0  jal         func_1C42F40
    ctx->pc = 0x1C43454u;
    SET_GPR_U32(ctx, 31, 0x1C4345Cu);
    ctx->pc = 0x1C43458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43454u;
    // 0x1c43458: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42F40u, 0x1C43454u, 0x1C4345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4345Cu;
label_1c4345c:
    // 0x1c4345c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c4345cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c43460: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C43460u;
    SET_GPR_U32(ctx, 31, 0x1C43468u);
    ctx->pc = 0x1C43464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43460u;
    // 0x1c43464: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C43460u, 0x1C43468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43468u;
label_1c43468:
    // 0x1c43468: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c43468u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c4346c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1c4346cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1c43470: 0xc710bd0  jal         func_1C42F40
    ctx->pc = 0x1C43470u;
    SET_GPR_U32(ctx, 31, 0x1C43478u);
    ctx->pc = 0x1C43474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43470u;
    // 0x1c43474: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42F40u, 0x1C43470u, 0x1C43478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43478u;
label_1c43478:
    // 0x1c43478: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c43478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c4347c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4347cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43480: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c43480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c43484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c43488: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c43488u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4348c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4348cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c43490: 0x871092a  j           func_1C424A8
    ctx->pc = 0x1C43490u;
    ctx->pc = 0x1C43494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43490u;
    // 0x1c43494: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C424A8u;
    sub_01C424A8_0x1c424a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C43498u;
}
